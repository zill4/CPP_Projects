#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
class Zombie 
{
    private:
        std::string randomNames[7] = {"geatan", "leo", "phil", "eric", "lucy", "lol", "mary"};
        std::string _name;
        std::string type;
        float weight_ib;
        std::string color;
        std::vector<Zombie> horde;
        
    public:
        Zombie(size_t s) :horde(s) {}
        Zombie(int num)
        {
            Zombie *hordes = new Zombie[num];
            for (int i = 0; i < num; i++)
            {
                hordes[i] = randomChump();
            }
        }
        Zombie(std::string name){
            _name = name;
            type = "dead";
            std::cout << "<" + name + "(" + type + ")" + "> " + "Braiiiiiiinnnssss..." << std::endl;
        }
        ~Zombie(){
            std::cout << "No more brains..." << std::endl;
            delete [] horde;
        }
        Zombie *randomChump();
        void setName(std::string n) {_name = n;}
        void setType(std::string t) {type = t;}
        void setWeight(float w_i) {weight_ib = w_i;}
        void setColor(std::string c) {color = c;}
        std::string getName() {return (_name);}
        std::string getType() {return (type);}
        float getWeightIB() {return (weight_ib);}
        std::string getColor() {return (color);}
        // Other functions
        void announce(std::string speech) {std::cout << speech;}
};

Zombie *Zombie::randomChump()
{
    std::string randomNames[7] = {"geatan", "leo", "phil", "eric", "lucy", "lol", "mary"};
  srand (time(NULL));
  std::string name = randomNames[rand() % 7];

  return (newZombie(name));
}
