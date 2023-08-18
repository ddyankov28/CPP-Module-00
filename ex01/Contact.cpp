/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:53:12 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/18 18:13:20 by ddyankov         ###   ########.fr       */
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
int     Contact::CheckName()
{
    int i = 0;

    while (isspace(_input[i]))
        i++;
    if (!isupper(_input[i]))
    {
        std::cout << "⛔️Please enter a correct input⛔️" << std::endl;
        return (0);
    }
    i++;
    while (_input[i])
    {
        if (!islower(_input[i]))
        {
            if (isspace(_input[i]) && isspace(_input[i + 1]))
                i++;
            else
            {
                std::cout << "⛔️Please enter a correct input⛔️" << std::endl;
                return (0);
            }
        }
        i++;
    }
    return (1);
}
int     Contact::CheckWhiteSpace()
{
    int i = 0;
    
    while (_input[i])
    {
        while (isspace(_input[i]))
            i++;
        if (_input[i] == '\0')
        {
            std::cout << "⛔️Please enter a correct input⛔️" << std::endl;
            return (0);
        }
        i++;
    }
    return (1);
}
int     Contact::CheckNumber()
{
    int i = 0;
    
    while (isspace(_input[i]))
        i++;
    if (_input[i] == '+')
        i++;
    while (isdigit(_input[i]))
        i++;
    
    while (_input[i])
    {
        if (isspace(_input[i]) && isspace(_input[i + 1]))
                i++;
        else
        {
            std::cout << "⛔️Please enter a correct phone number⛔️" << std::endl;
            return (0);
        }
        i++;
    }
    return (1);
}
void    Contact::AddFirstName()
{
    int i = 0;

    while (1)
    {
        if (!i)
            std::cout << "Please enter the contact first name↙️" << std::endl;
        i++;
        std::getline(std::cin, _input);
        if (!CheckName())
            continue ;
        else
        {
            SetFirstName(_input);    
            break ;
        }
    }
}
void    Contact::AddLastName()
{
    int i = 0;
    
    while (1)
    {
        if (!i) 
            std::cout << "Please enter the contact last name↙️" << std::endl;
        i++;
        std::getline(std::cin, _input);
        if (!CheckName())
            continue ;
        else
        {
            SetLastName(_input);
            break ;
        }
    }
}
void    Contact::AddNickName()
{
    int i = 0;
    
    while (1)
    {
        if (!i)
            std::cout << "Please enter the contact nickname↙️" << std::endl;
        i++;
        std::getline(std::cin, _input);
        if (!CheckWhiteSpace())
            continue ;
        else
        {
            SetNickName(_input);
            break ;
        }
    }
}
void    Contact::AddPhoneNumber()
{
    int i = 0;
    
    while (1)
    {
        if (!i)
            std::cout << "Please enter the contact phone number↙️" << std::endl;
        i++;
        std::getline(std::cin, _input);
        if (!CheckNumber())
            continue ;
        else
        {
            SetPhoneNumber(_input);
            break ;
        }
    }
}
void    Contact::AddDarkestSecret()
{
    int i = 0;

    while (1)
    {
        if (!i)
            std::cout << "Please enter the contact darkest secret↙️" << std::endl;
        i++;
        std::getline(std::cin, _input);
        if (!CheckWhiteSpace())
            continue ;
        else
        {
            SetDarkestSecret(_input);
            break ;
        }
    }
}
