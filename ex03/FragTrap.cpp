#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called"<< std::endl;
    Hit_points = 100;
    name = "Yves";
    Energy = 100;
    damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called"<< std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
    std::cout << "FragTrap constructor called" << std::endl;
    Hit_points = 100;
    name = n;
    Energy = 100;
    damage = 30;
}

 FragTrap::FragTrap(const FragTrap &other)
 {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
 }

FragTrap &FragTrap::operator=(const FragTrap &other)
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


void FragTrap::attack(const std::string& target)
{
    if (this->Energy > 0 && this->Hit_points > 0)
    {
        this->Energy--;    
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
    }
    else
    {
        if (this->Hit_points <= 0)
        {
            std::cout << "Action impossible life points are at 0" << std::endl;
            return ;
        }
        std::cout << "Energy points inufficient." << std::endl;
    } 
}

void FragTrap::highFivesGuys(void)
{
    if (this->Energy > 0 && this->Hit_points > 0)
    {
        this->Energy--;
        std::cout << this->name << " raise the hand for high fives" << std::endl;
    }
    else
    {
        if (this->Hit_points <= 0)
        {
            std::cout << "Action impossible life points are at 0" << std::endl;
            return ;
        }
        std::cout << "Energy points inufficient." << std::endl;
    } 
}
