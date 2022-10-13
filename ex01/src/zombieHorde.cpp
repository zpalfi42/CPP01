/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:38:36 by zpalfi            #+#    #+#             */
/*   Updated: 2022/10/13 14:47:30 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N , std::string name)
{
	int			i;
	std::string	names[N];
	Zombie		*zombies = new Zombie[N];

	i = -1;
	while (++i < N)
		zombies[i].addName(name);
	return (zombies);
}