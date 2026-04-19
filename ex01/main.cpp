/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:10:14 by memillet          #+#    #+#             */
/*   Updated: 2026/04/19 15:30:23 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string input;
    while(true)
    {
        std::cout << "Enter a command : ";
        if (!std::getline(std::cin, input))
            break;
        if (input.compare("ADD") == 0)
            phonebook.addContact();
        else if (input.compare("SEARCH") == 0)
            phonebook.searchContact();
        else if (input.compare("EXIT") == 0)
            return (0);
        else
            std::cout << "Enter a valid commande : ADD , SEARCH, EXIT" << std::endl;        
    }
    return (0);
}