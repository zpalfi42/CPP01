#include "Zombie.hpp"

/*
*   Add the next line at the end of announce() to print the address of the zombies.
*   std::cout << reinterpret_cast<void *>(this) << std::endl;
*/

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " is beeing killed :(" << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzZ..." << std::endl;
}