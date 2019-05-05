#include <iostream>
#include <string>

class Victim {
    private:
        std::string name;
        void announceBirth(std::string n);
        void announceDeath(std::string n);
    public:
        friend std::ostream& operator <<(std::ostream& os, Victim &v)
        {
            v.introduction(v.getName());
            return (os);
        }
        void introduction(std::string n);
        std::string getName() {return (name); }
        void setName(std::string n) {name = n;}
    Victim();
    Victim(std::string n)
    {
        name = n;
        announceBirth(name);
    }
    ~Victim()
    {
        announceDeath(name);
    }
};