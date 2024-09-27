#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() 
{
	std::cout << "DiamondTrap  default constructor called"<< std::endl;
	this->name = "Marc";
	Hit_points = FragTrap::Hit_points;
 	Energy = ScavTrap::Energy;
    damage = FragTrap::damage;

}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap")
{
	this->name = name;
	Hit_points = FragTrap::Hit_points;
	Energy = ScavTrap::Energy;
	damage = FragTrap::damage;
	std::cout << "DiamondTrap Constructor for the name " << this->name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = other;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
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

DiamondTrap::~DiamondTrap() 
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}


void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap named :" << this->name << " from the ClapTrap named: " << ClapTrap::name << "." << std::endl;
}
