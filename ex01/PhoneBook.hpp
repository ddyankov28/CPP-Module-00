/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:17:56 by ddyankov          #+#    #+#             */
/*   Updated: 2023/10/17 12:06:31 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP 
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>    
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact	_contacts[8];
        std::string _input;
        int         _count;

        void    AddContact();
        void    SearchByIndex();
        void    ShowPhoneBook();
        int     SearchPhoneBook();
    public:
        PhoneBook();    // constructor
        ~PhoneBook();   // destructor
        
        void    StartPhoneBook();
};

#endif