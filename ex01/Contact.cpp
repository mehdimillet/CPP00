/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:10:10 by memillet          #+#    #+#             */
/*   Updated: 2026/04/19 13:08:49 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact()
{
    firstName = "";
    lastName = "";
    nickName = "";
    phoneNumber = "";
    darkestSecret = "";
}

Contact::~Contact()
{

}

void    Contact::setFirstName(std::string fname)
{
    firstName = fname;
}

void    Contact::setLastName(std::string lname)
{
    lastName = lname;
}

void    Contact::setNickName(std::string nname)
{
    nickName = nname;
}

void    Contact::setPhoneNumber(std::string number)
{
    phoneNumber = number;
}

void    Contact::setDarkestSecret(std::string secret)
{
    darkestSecret = secret;
}

std::string	Contact::getFirstName()
{
    return (firstName);
}

std::string	Contact::getLastName()
{
    return (lastName);
}

std::string Contact::getNickName()
{
    return (nickName);
}

std::string Contact::getPhoneNumber()
{
    return (phoneNumber);
}

std::string Contact::getDarkestSecret()
{
    return (darkestSecret);
}
