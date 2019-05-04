#include "Victim.hpp"

class Peon : private Victim
{
    private:   
        std::string name;
    public:
        
        Peon(std::string n)
        {
            name = n;
            std::cout << "Zog Zog" << std::endl;
        }
        ~Peon()
        {
            std::cout << "Bleuark..." << std::endl;
        }
};