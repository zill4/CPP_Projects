#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <iostream>
#include <string>

int main()
{
Sorcerer robert("Robert", "the Magnificent");
Victim jim("Jimmy");
//Peon joe("Joe");
std::cout << robert << jim;
//robert.polymorph(jim);
//robert.polymorph(joe);
return 0;
}