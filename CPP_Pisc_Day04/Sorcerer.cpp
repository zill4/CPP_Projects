
#include "Sorcerer.hpp"

void Sorcerer::announceBirth(std::string n, std::string t)
{
    std::cout << n << ", " << t << ", is born !" << std::endl; 
}

void Sorcerer::announceDeath(std::string n, std::string t)
{
    std::cout << n << ", the " << t << ", is dead. Consequences will never be the same !" << std::endl;
}

void Sorcerer::introduction(Sorcerer s)
{
    std::cout <<
}
std::string strUpper(std::string str)
{
    std::string temp;
    temp = str;
    for (int i = 0; i < str.length(); i++)
        temp[i] = toupper(str[i]);
    
    return (temp);
}