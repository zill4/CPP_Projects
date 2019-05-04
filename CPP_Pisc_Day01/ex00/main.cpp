#include "Pony.hpp"
#include <iostream>
#include <string>
void ponyOnTheHeap()
{
    std::cout << "Pony on the Heap" << std::endl;
    Pony *heaper = new Pony();
    heaper->speak("Pony says hi.");
    delete heaper;
}
void ponyOnTheStack()
{
    std::cout << "Pony on the stack" << std::endl;
    Pony stacker;
    stacker.speak("Pony say naaaaaay.");
}
int main()
{
    ponyOnTheHeap();
    ponyOnTheStack();
}