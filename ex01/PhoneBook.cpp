/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:17:34 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/16 17:00:35 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "\t\t\t DEYAN'S PHONEBOOK ™® \t\t\t" << std::endl << std::endl;
    std::cout << "\t    THE PHONEBOOK ACCEPTS ONLY THESE 3 COMMANDS \t\t" << std::endl;
    std::cout << "\t\t1. ADD: Save a new contact\t\t" << std::endl;
    std::cout << "\t\t2. SEARCH: Display a specific contact\t\t" << std::endl;
    std::cout << "\t\t3. EXIT: Quit and the contacts are lost forever\t\t" << std::endl;
    return;
}
PhoneBook::~PhoneBook()
{
    return ;
}
void    PhoneBook::addContact()
{
    std::string contactData;

    std::cout << "Please enter the contact first name" << std::endl;
    while (std::getline(std::cin, contactData))
        _contacts[0].SetFirstName(contactData);  
}