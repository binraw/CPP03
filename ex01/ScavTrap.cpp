#include "ScavTrap.hpp"


    ScavTrap::ScavTrap() : ClapTrap()
    {
        Hit_points = 100;
        name = "Marc";
        Energy = 50;
        damage = 20;
    }

    ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
    {
        Hit_points = 100;
        name = n;
        Energy = 50;
        damage = 20;
    }

    ScavTrap::ScavTrap(ScavTrap &other)
    {
        std::cout << "ScavTrap Copy constructor called"<< std::endl;
        *this = other;
    }

    ScavTrap::~ScavTrap()
    {
        std::cout << "ScavTrap Destructor called" << std::endl;
    }

    void ScavTrap::attack(const std::string& target)
    {
        if (this->Energy > 0)
        {
            this->Energy--;    
            std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
        }
        else 
            std::cout << "Energy points inufficient." << std::endl;
    }

    ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

    void ScavTrap::guardGate()
    {
        std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
    }