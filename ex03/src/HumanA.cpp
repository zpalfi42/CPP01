#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA()
{
}

void    HumanA::attack( void )
{
    if (this->weapon.getType().empty())
        std::cout << this->name << " has no weapon :(" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}