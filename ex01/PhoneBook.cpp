/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:10:19 by memillet          #+#    #+#             */
/*   Updated: 2026/04/20 21:10:23 by memillet         ###   ########.fr       */
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
        if (!std::getline(std::cin, input[0]))
            return ;
    }
    contacts[oldContact].setFirstName(input[0]);
    while (input[1].empty() || isOnlySpaces(input[1]))
    {
        std::cout << "Enter the LastName :";
        if (!std::getline(std::cin, input[1]))
            return ;
    }
    contacts[oldContact].setLastName(input[1]);
    while (input[2].empty() || isOnlySpaces(input[2]))
    {
        std::cout << "Enter the NickName :";
        if (!std::getline(std::cin, input[2]))
            return ;
    }    
    contacts[oldContact].setNickName(input[2]);
    while (input[3].empty() || isOnlySpaces(input[3]))
    {
        std::cout << "Enter the PhoneNumber :";
        if (!std::getline(std::cin, input[3]))
            return ;
    }
    contacts[oldContact].setPhoneNumber(input[3]);
    while(input[4].empty() || isOnlySpaces(input[4]))
    {
        std::cout << "Enter the DarkestSecret :";
        if (!std::getline(std::cin, input[4]))
            return ;
    }
    contacts[oldContact].setDarkestSecret(input[4]);
    oldContact += 1;
    if (count < 8)
        count++;
    if (oldContact == 8)
        oldContact = 0;
}

void    replaceTab(std::string &str)
{
    for (int i = 0; str[i]; i++)
    {   
        if (str[i] == '\t')
            str[i] = ' ';
    }
}

void    PhoneBook::searchContact()
{
    for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::string name = contacts[i].getFirstName();
        replaceTab(name);
        if (name.length() > 10)
            name = name.substr(0, 9) + ".";
        std::cout << std::setw(10) << name << "|";
        std::string lastname = contacts[i].getLastName();
        replaceTab(lastname);
        if (lastname.length() > 10)
            lastname = lastname.substr(0, 9) + ".";
        std::cout << std::setw(10) << lastname << "|";
        std::string nickname = contacts[i].getNickName();
        replaceTab(nickname);
        if (nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";
        std::cout << std::setw(10) << nickname << std::endl;
    }
    int index = -1;
    std::string input;
    while (index > count || index < 1)
    {
        std::cout << "choose the contact" << std::endl;
        if (!std::getline(std::cin, input))
            return ;
        index = atoi(input.c_str());
        if (index <= count && index >= 1)
            break;
        std::cout << "Bad index, enter a valid plz" << std::endl;
    }
    std::cout << contacts[index - 1].getFirstName() << std::endl;
    std::cout << contacts[index - 1].getLastName() << std::endl;
    std::cout << contacts[index - 1].getNickName() << std::endl;
    std::cout << contacts[index - 1].getPhoneNumber() << std::endl;
    std::cout << contacts[index - 1].getDarkestSecret() << std::endl;
}
