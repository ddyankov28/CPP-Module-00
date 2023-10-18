/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:53:12 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/12 16:39:42 by ddyankov         ###   ########.fr       */
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
    while (_input[i])
    {
        if (isalpha(_input[i]) || isspace(_input[i]))
            i++;
        else
        {
            std::cout << "⛔️Please enter a correct input⛔️" << std::endl;
            return (0);
        }
    }
    return (1);
}
int     Contact::CheckWhiteSpace()
{
    int i = 0;
    
    if (_input == "")
    {
        std::cout << "⛔️Please enter a correct input⛔️" << std::endl;
        return (0);
    }
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
    
    while(_input[i])
    {
        if (isdigit(_input[i]) || _input[i] == '+' || _input[i] == '-' || isspace(_input[i]))
            i++;
        else if (!isdigit(_input[i]))
        {
            std::cout << "⛔️Please enter a correct phone number⛔️" << std::endl;
            return (0);
        }
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
        if (std::cin.eof())
                exit(0);
        if (!std::getline(std::cin, _input))
        {
            if (std::cin.eof())
                exit(0);
        }
        if (!CheckWhiteSpace() || !CheckName())
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
        if (!std::getline(std::cin, _input))
        {
            if (std::cin.eof())
                exit(0);
        }
        if (!CheckWhiteSpace() || !CheckName())
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
        if (!std::getline(std::cin, _input))
        {
            if (std::cin.eof())
                exit(0);
        }
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
        if (std::getline(std::cin, _input))
        {
            if (std::cin.eof())
                exit(0);
        }
        if (!CheckWhiteSpace() || !CheckNumber())
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
        if (!std::getline(std::cin, _input))
        {
            if (std::cin.eof())
                exit(0);
        }
        if (!CheckWhiteSpace())
            continue ;
        else
        {
            SetDarkestSecret(_input);
            break ;
        }
    }
}
