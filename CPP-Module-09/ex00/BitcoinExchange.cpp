/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:30:54 by alsaeed           #+#    #+#             */
/*   Updated: 2024/09/03 12:16:28 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {

	return;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &src ) {

	this->database = src.database;	

	return;
}

BitcoinExchange &BitcoinExchange::operator=( BitcoinExchange const &rhs ) {

	if ( this != &rhs ) {

		this->database = rhs.database;
	}

	return *this;
}

BitcoinExchange::~BitcoinExchange() {

	return;
}

void	BitcoinExchange::loadDatabase( std::string const &fileName ) {

	std::ifstream	file(fileName.c_str());
	if ( !file.is_open() ) {
		
		std::cerr << "Error: could not open input file." << std::endl;
		return;
	}

	std::string	line;
	std::getline(file, line); // to skip the titles line

	while ( std::getline(file, line)) {

		std::istringstream	iss(line);
		std::string			date;
		double				rate;

		if ( std::getline(iss, date, ',') && (iss >> rate)) {
			
			database[date] = rate;
		}
	}

	return;
}

void	BitcoinExchange::processInputFile( std::string const &fileName ) {
	
	std::ifstream	inputFile( fileName.c_str() );
	if ( !inputFile.is_open() ) {

		std::cerr << "Error: could not open database file." << std::endl;
		return;
	}
	
	std::string	line;
	std::getline( inputFile, line );
	
	while ( std::getline( inputFile, line ) ) {
		
		processLine( line );
	}
}

void	BitcoinExchange::processLine( std::string const &line ) {
	
	std::istringstream	iss( line );
	std::string			date;
	double				value;

	if ( std::getline( iss, date, '|' ) && ( iss >> value ) ) {
		
		date = date.substr( 0, date.find_last_not_of(" \t") + 1 );
		if ( !isValidDate( date ) ) {
		
			std::cout << "Error: Bad input => " << date << std::endl;
		} else if ( !isValidValue( value ) ) {
			
			if ( value < 0 ) {

				std::cout << "Error: not a positive number." << std::endl;
			} else {
				
				std::cout << "Error: too large number." << std::endl;
			}
		} else {
			
			try {

				double rate = getExchangeRate( date );
				double result = value * rate;
				std::cout << date << " => " << value << " = " << result << std::endl;
			} catch ( std::exception const &e ) {
				
				std::cout << "Error: " << e.what() << std::endl;
			}
		}
	} else {

		std::cout << "Error: Bad input => " << line << std::endl;
	}
}

int	daysBetween( std::string const &date1, std::string const &date2 ) {

	std::tm tm1 = {}, tm2 = {};
	std::istringstream ss1(date1);
	std::istringstream ss2(date2);
	
	ss1 >> tm1.tm_year;
	ss1.ignore();
	ss1 >> tm1.tm_mon;
	ss1.ignore();
	ss1 >> tm1.tm_mday;
	
	ss2 >> tm2.tm_year;
	ss2.ignore();
	ss2 >> tm2.tm_mon;
	ss2.ignore();
	ss2 >> tm2.tm_mday;

	tm1.tm_year -= 1900;
	tm1.tm_mon -= 1;
	tm2.tm_year -= 1900;
	tm2.tm_mon -= 1;
	
	std::time_t time1 = std::mktime(&tm1);
	std::time_t time2 = std::mktime(&tm2);
	
	return std::abs(static_cast<int>(std::difftime(time1, time2) / (60 * 60 * 24)));
}

double	BitcoinExchange::getExchangeRate( std::string const &date ) const {
	
	std::map<std::string, double>::const_iterator it = database.lower_bound(date);

	if ( it == database.end() ) {
		
		--it;
	} else if ( it == database.begin() && it->first > date ) {
		
		throw std::runtime_error("Error: no exchange rate available for the given date.");
	} else if ( it->first != date ) {
		
		std::map<std::string, double>::const_iterator prev = it;
		--prev;
		if (daysBetween(date, prev->first) <= daysBetween(date, it->first)) {

			it = prev;
		}
	}
	
	return it->second;
}

bool	BitcoinExchange::isValidDate( std::string const &date ) const {

	if ( date.length() != 10 ) {
		
		return false;
	}
	if ( date[4] != '-' || date[7] != '-') {
		
		return false;
	}

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if ( year < 1 || month < 1 || month > 12 || day < 1 ) {

		return false;
	}
	
	const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if ( month == 2 ) {
		
		if ( isLeapYear( year ) ) {
			
			if ( day > 29 ) {
				
				return false;
			}
		} else {
			
			if ( day > 28 ) {
				
				return false;
			}
		}
	} else {

		if ( day > daysInMonth[month]) {

			return false;
		}
	}

	return true;
}

bool	BitcoinExchange::isValidValue( double value ) const {
	
	return value >= 0 && value <= 1000;
}

bool	BitcoinExchange::isLeapYear( int year ) const {
	
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
