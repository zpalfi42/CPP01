#include "Weapon.hpp"

Weapon::Weapon( std::string type)
{
    if (type.empty())
    {
        while (42)
        {
            std::cout << "Weapon cannot be empty!!" << std::endl << "Try again: ";
            std::getline(std::cin, type);
            if (type.empty())
                continue ;
            else
                break ;
        }
    }
    this->type = type;
}

Weapon::~Weapon()
{
}

std::string const	Weapon::getType( void )
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}