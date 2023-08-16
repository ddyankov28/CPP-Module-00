/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:53:12 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/16 15:40:51 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    return;
}
Contact::~Contact()
{
    return;
}
void    Contact::SetFirstName(std::string firstName)
{
    _firstName = firstName;
}
void    Contact::SetLastName(std::string lastName)
{
    _lastName = lastName;
}
void    Contact::SetNickName(std::string nickName)
{
    _nickName = nickName;
}
void    Contact::SetPhoneNumber(std::string phoneNumber)
{
    _phoneNumber = phoneNumber;
}
void    Contact::SetDarkestSecret(std::string darkestSecret)
{
    _darkestSecret = darkestSecret;
}
void    Contact::SetIndex(int index)
{
    _index = index;
}
std::string Contact::GetFirstName()
{
    return _firstName;
}
std::string Contact::GetLastName()
{
    return _lastName;
}
std::string Contact::GetNickName()
{
    return _nickName;
}
std::string Contact::GetPhoneNumber()
{
    return _phoneNumber;
}
std::string Contact::GetDarkestSercret()
{
    return _darkestSecret;
}
int Contact::GetIndex()
{
    return _index;
}
