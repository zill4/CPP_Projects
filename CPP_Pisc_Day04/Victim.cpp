#include "Victim.hpp"

void Victim::announceBirth(std::string n)
{
    std::cout <<"Some random victim called " << n << " just popped !" << std::endl;

}

void Victim::announceDeath(std::string n)
{
    std::cout << "Victim " << n << " just died for no apparent reason !" << std::endl;
}