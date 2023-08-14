/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:40:07 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/14 18:46:43 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook pb;
    std::string command;
    while (1)
    {
        std::getline(std::cin, command);
        if (command == "ADD")
            std::cout << "add operation" << std::endl;
        else if (command == "SEARCH")
            std::cout << "search operation" << std::endl;
        else if (command == "EXIT")
        {
            std::cout << "\t\t*** GOODBYE, SEE YOU SOON ***\t\t" << std::endl;
            return (0);
        }
        else
        {
            std::cout << "PLEASE ENTER A VALID COMMAND" << std::endl;
            continue;
        }
        
    }
    return (0);
}