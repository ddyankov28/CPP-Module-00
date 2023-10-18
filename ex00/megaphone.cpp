/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:00:59 by ddyankov          #+#    #+#             */
/*   Updated: 2023/10/17 11:31:58 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Megaphone
{
    public:
        void toUpper(int ac, char **av, int argsCounter)
        {
            if (ac > 1)
            {
                while (av[argsCounter])
                {
                    int i = 0;
                    std::string arg = av[argsCounter];
                    while (arg[i])
                    {
                        std::cout << (char)toupper(arg[i]);
                        i++;
                    }
                    argsCounter++;
                }    
            }
            else
                std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
            std::cout << std::endl;
        }
};

int main(int ac, char **av)
{
    Megaphone announcment;
    
    announcment.toUpper(ac, av, 1);
    return (0);
}
