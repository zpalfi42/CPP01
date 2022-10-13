/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:38:29 by zpalfi            #+#    #+#             */
/*   Updated: 2022/10/13 14:53:48 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int    getN( void )
{
    std::string index;
    int         N;
    int         i;

    while (42)
    {
        N = 0;
        i = 0;
        std::cout << "Insert number of zombies: ";
        std::getline(std::cin, index);
        index.erase(0, index.find_first_not_of(" \t\v\f\r"));
        while (std::isspace(index[index.length() - 1]))
            index.erase(index.find_last_not_of(" \t\v\r\f") + 1, index[index.length() - 1]);
        if (index.empty())
            continue ;
        while(index[i])
        {   
            if (index[i] < '0' || index[i] > '9')
            {
                std::cout << "Please enter a valid number >:(" << std::endl;
                N = 0;
                break ;
            }
            N = N * 10 + (index[i] - '0');
            i++;
        }
        if (N > 0)
            return (N);
    }
    return (0);
}

std::string getName( void )
{
    std::string name;
    
    while (42)
    {
        std::cout << "Name the zombies: ";
        std::getline(std::cin, name);
        if (name.empty())
            continue;
        else
            break ;
    }
    return (name);
}

int main()
{
    Zombie      *zombies;
    std::string name;
    int		    N;
    int		    i;

    N = getN();
    name = getName();
	zombies = zombieHorde(N, name);

    i = 0;
    while (i < N)
    {
        zombies[i].announce();
        i++;
    }
    delete[] zombies;
    return (0);
}