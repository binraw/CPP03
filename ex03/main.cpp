#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap ab;
    DiamondTrap ba("Lou");
    DiamondTrap ca;
    DiamondTrap ac("Rodrigo");
    ca = ac;

    ba.attack("bobby");

    std::cout << "Copy of ac to ca :" << std::endl;
    
    std::cout << "ab test highFives > energy == 0 :" << std::endl;
  



}
