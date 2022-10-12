#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie( void )
{
    return ;
}

void    Zombie::displayName( void )
{
    std::cout << this->name << std::endl;
}