/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:00:59 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/11 16:11:22 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    if (ac > 1)
    {
        while (av[i])
        {
            int c = 0;
            while (av[i][c])
            {
                std::cout << (char)toupper(av[i][c]);
                c++;
            }
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std:: cout << std::endl;
    return (0);
}
