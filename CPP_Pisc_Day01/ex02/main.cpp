#include "Zombie.hpp"
#include <iostream>

Zombie *randomChump();
Zombie *newZombie(std::string name){return (new Zombie(name));}

Zombie *randomChump()
{
    std::string randomNames[7] = {"geatan", "leo", "phil", "eric", "lucy", "lol", "mary"};
  srand (time(NULL));
  std::string name = randomNames[rand() % 7];

  return (newZombie(name));
}
int main()
{
    // //Create a zombie
    //         Zombie *randomChump();
    //     Zombie *newZombie(std::string name){return (new Zombie(name));}
    //     void setName(std::string n) {_name = n;}
    //     void setType(std::string t) {type = t;}
    //     void setWeight(float w_i) {weight_ib = w_i;}
    //     void setColor(std::string c) {color = c;}
    //     std::string getName() {return (_name);}
    //     std::string getType() {return (type);}
    //     float getWeightIB() {return (weight_ib);}
    //     std::string getColor() {return (color);}
    Zombie *bob = randomChump();
    Zombie *tom = newZombie("tom");
    delete tom;
    delete bob;
}