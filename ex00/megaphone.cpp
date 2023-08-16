/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:00:59 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/16 14:48:08 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Megaphone
{
    public:
        void toUpper(int ac, char **av, int argsCounter, int i)
        {
            if (ac > 1)
            {
                while (av[argsCounter])
                {
                    i = 0;
                    while (av[argsCounter][i])
                    {
                        std::cout << (char)toupper(av[argsCounter][i]);
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
    
    announcment.toUpper(ac, av, 1, 0);
    return (0);
}
