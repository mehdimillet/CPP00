/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:10:05 by memillet          #+#    #+#             */
/*   Updated: 2026/04/18 14:18:49 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class	Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	
	public:
		Contact(); // constructeur on l'utilise pour creer un objet
		~Contact(); // desttructeur pour detruire l'objet
		std::string	getFirstName();
		void		setFirstName(std::string fname);
		std::string	getLastName();
		void		setLastName(std::string lname);
		std::string	getnickName();
		void    Contact::setNickName(std::string nname);
		std::string	getPhoneNumber();
		void		setPhoneNumber(std::string number);
		std::string	getDarkestSecret();
		void		setDarkestSecret(std::string secret);
};

#endif