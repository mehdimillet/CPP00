/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:10:27 by memillet          #+#    #+#             */
/*   Updated: 2026/04/18 21:59:25 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

bool    isOnlySpaces(std::string);

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int	count;
		int oldContact;
	public:
		void	addContact();
		void	searchContact(int);
		PhoneBook();
		~PhoneBook();
};

#endif