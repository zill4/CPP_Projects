#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Zombie 
{
    private:
        std::string _name;
        std::string type;
        float weight_ib;
        std::string color;
    public:
        Zombie(std::string name){
            _name = name;
            type = "dead";
            std::cout << "<" + name + "(" + type + ")" + "> " + "Braiiiiiiinnnssss..." << std::endl;
        }
        ~Zombie(){
            std::cout << "No more brains..." << std::endl;
            
        }
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

