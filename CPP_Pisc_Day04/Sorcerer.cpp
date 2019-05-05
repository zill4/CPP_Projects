
#include "Sorcerer.hpp"

void Sorcerer::announceBirth(std::string n, std::string t)
{
    std::cout << n << ", " << t << ", is born !" << std::endl; 
}

void Sorcerer::announceDeath(std::string n, std::string t)
{
    std::cout << n << ", the " << t << ", is dead. Consequences will never be the same !" << std::endl;
}

void Sorcerer::introduction(std::string name, std::string title)
{
    std::cout << "I am "<< name << ", " << title << ", and I like ponies !" << std::endl;
}