#include <string>
#include <iostream>

class Sorcerer 
{
    private:
        std::string name;
        std::string title;
        void announceBirth(std::string n, std::string t);
        void announceDeath(std::string n, std::string t);
    public:
        friend std::ostream& operator <<(std::ostream& os,  Sorcerer &s)
        {
            s.introduction(s.getName(), s.getTitle());
            return (os);
        }
        void introduction(std::string name, std::string title);
        std::string getName() {return (name); }
        std::string getTitle() {return (title); }
        void setName(std::string n) {name = n;}
        void setTitle(std::string t) {title = t;}
    Sorcerer(std::string n, std::string t)
    {
        name = n;
        title = t;
        announceBirth(name, title);
    }
    ~Sorcerer()
    {
        announceDeath(name, title);
    }
};

