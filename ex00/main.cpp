#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap f("MARC");
    ClapTrap g;
    ClapTrap j(f);
    f.attack("bob");
    g.attack("Juice");
    f.beRepaired(10);
    f.takeDamage(5);
    j.attack("kooo");
    f.~ClapTrap();
}