#include <string>
#include <iostream>
class Pony 
{
    private:
        std::string name;
        std::string type;
        float weight_ib;
        std::string color;
    public:
        ~Pony(){
            std::cout << "Pony is now in the great big ranch in the sky." << std::endl;
        }
        void setName(std::string n) {name = n;}
        void setType(std::string t) {type = t;}
        void setWeight(float w_i) {weight_ib = w_i;}
        void setColor(std::string c) {color = c;}
        std::string getName() {return (name);}
        std::string getType() {return (type);}
        float getWeightIB() {return (weight_ib);}
        std::string getColor() {return (color);}
        // Other functions
        void speak(std::string speech) {std::cout << speech;}
};