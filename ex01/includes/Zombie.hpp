#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <vector>
#include <string>
#include <iostream>

class Zombie {


public:

	typedef Zombie		v;

	Zombie(std::string name);
	~Zombie( void );

	void	displayName( void );

private:

	std::string name;

	Zombie( void );
    // void    announce( void );
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif