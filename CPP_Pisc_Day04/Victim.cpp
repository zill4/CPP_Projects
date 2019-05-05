#include "Victim.hpp"

void Victim::announceBirth(std::string n)
{
    std::cout <<"Some random victim called " << n << " just popped !" << std::endl;

}

void Victim::announceDeath(std::string n)
{
    std::cout << "Victim " << n << " just died for no apparent reason !" << std::endl;
}

void Victim::introduction(std::string n)
{
    std::cout << "I'm "<<  n  << ", and I like otters !" << std::endl;
}