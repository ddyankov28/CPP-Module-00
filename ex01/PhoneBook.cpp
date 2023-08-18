/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:17:34 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/18 19:48:37 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "\t     ⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️" << std::endl;
    std::cout << "\t     ⭐️                                                                      ⭐️" << std::endl;
    std::cout << "\t     ⭐️\t\t    📖 𝘿 𝙀 𝙔 𝘼 𝙉 ' 𝙎   𝙋 𝙃 𝙊 𝙉 𝙀 𝘽 𝙊 𝙊 𝙆 ™️ ®️  📖\t     ⭐️" << std::endl;
    std::cout << "\t     ⭐️                                                                      ⭐️" << std::endl;
    std::cout << "\t     ⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️" << std::endl;
    std::cout << "\t     ⭐️\t\t     THE PHONEBOOK ACCEPTS ONLY THESE 3 COMMANDS\t     ⭐️" << std::endl;
    std::cout << "\t     ⭐️1. 🇦 🇩 🇩  : Save a new contact\t\t\t\t\t     ⭐️" << std::endl;
    std::cout << "\t     ⭐️2. 🇸 🇪 🇦 🇷 🇨 🇭  : Display a specific contact\t\t\t     ⭐️" << std::endl;
    std::cout << "\t     ⭐️3. 🇪 🇽 🇮 🇹  : Quit and the contacts are lost forever\t\t     ⭐️" << std::endl;
    std::cout << "\t     ⭐️\t\t\t\t\t\t\t\t\t     ⭐️" << std::endl;
    std::cout << "\t     ⭐️\t\t     ❗️❗️THE RULES OF DEYAN'S PHONEBOOK❗️❗️\t\t     ⭐️" << std::endl;
    std::cout << "\t     ⭐️1. Name's first letter is always uppercase, rest always lowercase     ⭐️" << std::endl;
    std::cout << "\t     ⭐️2. Phone numbers contain only digits, a + can be only at the beginning⭐️" << std::endl;
    std::cout << "\t     ⭐️3. Nickname and darkest secret can contain everything\t\t     ⭐️" << std::endl;
    std::cout << "\t     ⭐️4. The Phonebook can store a maximum of 8 contacts\t\t     ⭐️" << std::endl;
    std::cout << "\t     ⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️⭐️" << std::endl;
    return;
}
PhoneBook::~PhoneBook()
{
    return ;
}
void    PhoneBook::StartPhoneBook()
{
    _count = 0;
    while (1)
    {
        std::cout << "Please enter a command (🇦 🇩 🇩 , 🇸 🇪 🇦 🇷 🇨 🇭 , 🇪 🇽 🇮 🇹 )" << std::endl;
        std::getline(std::cin, _input);
        if (_input == "ADD")
            AddContact();
        else if (_input == "SEARCH")
        {
            if (!SearchPhoneBook())
                continue ;
            SearchByIndex();
        }
        else if (_input == "EXIT")
        {
            std::cout << "\t\t👋 ⭐️⭐️⭐️ GOODBYE, SEE YOU SOON ⭐️⭐️⭐️ 👋\t\t" << std::endl;
            return ;
        }
        else
            continue ;
    }
}
void    PhoneBook::AddContact()
{
    static int n = 0;
    int i = 0;
    
    i = n % 8;
    _contacts[i].SetIndex(i);
    _contacts[i].AddFirstName();
    _contacts[i].AddLastName();
    _contacts[i].AddNickName();
    _contacts[i].AddPhoneNumber();
    _contacts[i].AddDarkestSecret();
    std::cout << "✅Contact has been added successfully✅" << std::endl;
   
    n++;
    _count++;
}
int    PhoneBook::SearchPhoneBook()
{
    if (!_count)
    {
        std::cout << "🚫The Phonebook is empty, try another command🚫" << std::endl;
        return (0);
    }
    ShowPhoneBook();
    return (1);
}
void    PhoneBook::ShowPhoneBook()
{
    int i = 0;
    std::string temp;
    
    std::cout << "*********************************************" << std::endl;
    std::cout << "*  index   first name  last name   nickname *" << std::endl;
    std::cout << "*********************************************" << std::endl;
    while (i < _count)
    {
        std::cout << "|" << std::setw(10) << _contacts[i].GetIndex();
        if (_contacts[i].GetFirstName().length() > 10)
        {
            temp = _contacts[i].GetFirstName();
            temp.resize(10);
            temp[9] = '.';
            std::cout << "|" << std::setw(10) << temp;
        }
        else
            std::cout << "|" << std::setw(10) << _contacts[i].GetFirstName();
        if (_contacts[i].GetLastName().length() > 10)
        {
            temp = _contacts[i].GetLastName();
            temp.resize(10);
            temp[9] = '.';
            std::cout << "|" << std::setw(10) << temp;
        }
        else
            std::cout << "|" << std::setw(10) << _contacts[i].GetLastName();
        if (_contacts[i].GetNickName().length() > 10)
        {
            temp = _contacts[i].GetNickName();
            temp.resize(10);
            temp[9] = '.';
            std::cout << "|" << std::setw(10) << temp << "|" << std::endl;
        }
        else
            std::cout << "|" << std::setw(10) << _contacts[i].GetNickName() << "|" << std::endl;
        i++;
    }
    std::cout << "*********************************************" << std::endl;
}
    
void    PhoneBook::SearchByIndex()
{
    int index = 0;
    std::string   inp;

    while (1)
    {
        std::cout << "Please enter an index 0,1,2,3,4,5,6 or 7 for full info ↩️" << std::endl;
        std::getline(std::cin, inp);
        index = std::atoi(inp.c_str());
        if (index < 0 || index > 8 || _contacts[index].GetFirstName() == "")
        {
            std::cout << "📛Invalid index. Please try again📛" << std::endl;
            continue;
        }
        else
        {
            std::cout << "FIRST NAME: " << _contacts[index].GetFirstName() << std::endl;
            std::cout << "LAST NAME: " << _contacts[index].GetLastName() << std::endl;
            std::cout << "NICKNAME: " << _contacts[index].GetNickName() << std::endl;
            std::cout << "PHONE NUMBER: " << _contacts[index].GetPhoneNumber() << std::endl;
            std::cout << "DARKEST SECRET: " << _contacts[index].GetDarkestSercret() << std::endl;
            break ;
        }
    }
}
