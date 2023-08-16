/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:17:56 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/16 16:50:40 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"


class PhoneBook
{
    private:
        Contact	_contacts[7];
    public:
        PhoneBook();    // constructor
        ~PhoneBook();   // destructor
    
        void    addContact();
};

#endif