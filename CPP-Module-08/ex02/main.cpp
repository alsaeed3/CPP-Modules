/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:04:00 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/20 20:23:09 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main()
{
    std::cout << "#####################" << std::endl;
    std::cout << "# using MutantStack #" << std::endl;
    std::cout << "#####################" << std::endl;
    std::cout << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it1 = mstack.begin();
    MutantStack<int>::iterator ite1 = mstack.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    
    std::stack<int> s1(mstack);

    std::cout << std::endl;
    std::cout << "###################" << std::endl;
    std::cout << "# using std::list #" << std::endl;
    std::cout << "###################" << std::endl;
    std::cout << std::endl;

    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << mlist.back() << std::endl;
    mlist.pop_back();
    std::cout << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0);
    
    std::list<int>::iterator it2 = mlist.begin();
    std::list<int>::iterator ite2 = mlist.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    
    std::list<int> s2(mlist);
    return 0;
}