/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:38:24 by zpalfi            #+#    #+#             */
/*   Updated: 2022/10/13 14:43:10 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_HPP
#define __ZOMBIE_HPP

#include <vector>
#include <string>
#include <iostream>

class Zombie {


public:

	Zombie( void );

	Zombie(std::string name);
	~Zombie( void );

	void    announce( void );
	void	addName(std::string);

private:
	std::string name;
};

Zombie	*zombieHorde( int N , std::string name );

#endif