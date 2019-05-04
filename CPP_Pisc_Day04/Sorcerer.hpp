#include <string>
#include <iostream>
class Sorcerer 
{
    private:
        std::string name;
        std::string title;
        void announceBirth(std::string n, std::string t);
        void announceDeath(std::string n, std::string t);
        void operator <<(Sorcerer s)
        {
            introduction(s);
        }
    public:
        void introduction(Sorcerer supreme);
        std::string getName() {return (name); }
        std::string getTitle() {return (title); }
        void setName(std::string n) {name = n;}
        void setTitle(std::string t) {title = t;}
    Sorcerer(std::string n, std::string t)
    {
        t = title;
        n = name;
        announceBirth(n, t);
    }
    ~Sorcerer()
    {
        announceDeath(name, title);
    }
};

