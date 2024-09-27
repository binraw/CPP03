#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor called" << std::endl;
    this->name = name;
    this->Hit_points = 10;
    this->Energy = 10;
    this->damage = 0;
}

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
    this->name = "flash";
    this->Hit_points = 10;
    this->Energy = 10;
    this->damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called"<< std::endl;
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
    {
		this->damage = other.damage;
        this->Energy = other.Energy;
        this->Hit_points = other.Hit_points;
        this->name = other.name;
    }
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy > 0 && this->Hit_points > 0)
    {
        this->Energy--;    
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
    }
    else 
    {
        if (this->Hit_points <= 0)
        {
            std::cout << "Hit points == 0" << std::endl;
            return ;
        }
        std::cout << "Energy points inufficient." << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    this->Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    
    if (this->Energy > 0 && this->Hit_points > 0)
    {
        this->Hit_points += amount;
        this->Energy--;
        std::cout << this->name << " repaired " << amount << " points." << std::endl;
    }
    else 
    {
        if (this->Hit_points <= 0)
        {
            std::cout << "Hit points == 0" << std::endl;
            return ;
        }
        std::cout << "Energy points inufficient." << std::endl;
    }
}
