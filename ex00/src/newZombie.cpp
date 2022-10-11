#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie  *zombie1 = new Zombie(name);
    return (zombie1);
}