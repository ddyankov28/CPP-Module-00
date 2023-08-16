/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:53:02 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/16 15:40:44 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
class Contact
{
    private:
        std::string	_firstName;
        std::string _lastName;
		std::string _nickName;
		std::string	_phoneNumber;
		std::string _darkestSecret;
		int			_index;
	public:
		Contact(); //constructor
		~Contact(); //destructor

		void	SetFirstName(std::string firstName);
		void	SetLastName(std::string lastName);
		void	SetNickName(std::string nickName);
		void	SetPhoneNumber(std::string phoneNumber);
		void	SetDarkestSecret(std::string darkestSecret);
		void	SetIndex(int index);

		std::string	GetFirstName();
		std::string GetLastName();
		std::string	GetNickName();
		std::string	GetPhoneNumber();
		std::string	GetDarkestSercret();
		int	GetIndex();
};

#endif