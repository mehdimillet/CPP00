/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:10:19 by memillet          #+#    #+#             */
/*   Updated: 2026/04/18 21:58:35 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

bool    isOnlySpaces(std::string str)
{
    for (int i = 0; str[i]; i++)
    {
        if (!isspace(str[i]))
            return (false);
    }
    return (true);
}

PhoneBook::PhoneBook()
{
    count = 0;
    oldContact = 0;
}

PhoneBook::~PhoneBook()
{
    
}

void    PhoneBook::addContact()
{
    std::string input[5];
    while (input[0].empty() || isOnlySpaces(input[0]))
    {
        std::cout << "Enter the FirstName :";
        std::getline(std::cin, input[0]);
    }
    contacts[oldContact].setFirstName(input[0]);
    while (input[1].empty() || isOnlySpaces(input[1]))
    {
        std::cout << "Enter the LastName :";
        std::getline(std::cin, input[1]);
    }
    contacts[oldContact].setLastName(input[1]);
    while (input[2].empty() || isOnlySpaces(input[2]))
    {
        std::cout << "Enter the NickName :";
        std::getline(std::cin, input[2]);
    }    
    contacts[oldContact].setNickName(input[2]);
    while (input[3].empty() || isOnlySpaces(input[3]))
    {
        std::cout << "Enter the PhoneNumber :";
        std::getline(std::cin, input[3]);
    }
    contacts[oldContact].setPhoneNumber(input[3]);
    while(input[4].empty() || isOnlySpaces(input[4]))
    {
        std::cout << "Enter the DarkestSecret :";
        std::getline(std::cin, input[4]);
    }
    contacts[oldContact].setDarkestSecret(input[4]);
    oldContact += 1;
    count += 1;
    if (oldContact == 8)
        oldContact = 0;
}

void    PhoneBook::searchContact(int index)
{
    
}