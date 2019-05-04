#include <iostream>
#include <string>

class Victim {
    private:
        std::string name;
        void announceBirth(std::string n);
        void announceDeath(std::string n);
    public:
        void introduction(Victim victor);
        std::string getName() {return (name); }
        void setName(std::string n) {name = n;}
    Victim();
    Victim(std::string n)
    {
        n = name;
        announceBirth(n);
    }
    ~Victim()
    {
        announceDeath(name);
    }
};