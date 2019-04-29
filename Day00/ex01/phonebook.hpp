#include <iostream>
#include <string>
#include <contact.hpp>
#include <iomanip>
using namespace std;

class Phonebook
{
    private:
        // I want an array of maximum eight contacts.
        Contact contacts[8]; 
        int contactCount;       
    public:
        //constructor
        Phonebook()
        {
            contactCount = 0;
        }
        //mutators
        bool addContact(Contact newContact);
        //accessors
        //other
        void displayContacts();
        bool displayContact(int index);
};

/*
 * Should add a contact to the phonebook if count is less than 7
 */
bool Phonebook::addContact(Contact newContact){
        if (contactCount > 7)
            return (false);
        else
        {
            contacts[contactCount] = newContact;
            return (true);
        }
}

/*
 * Display the all current contacts
 */
void Phonebook::displayContacts()
{
    cout << setw(10) << "INDEX" <<  "FIRST NAME" << "LAST NAME" << "NICKNAME\n";
    if (contactCount > 0)
    {
        for (int i = 0; i < contactCount; i++)
        {
            cout << setw(10) << i << contacts[i].getFirstName() \
            << contacts[i].getLastName() << contacts[i].getNickname() << "\n";
        }
    }
    cout << "------------------------------------------------------------------\n";
}

/*
 * Display a given contact by index.
 */
bool Phonebook::displayContact(int index)
{
    if (index > contactCount || index < 0)
        return (false);
    if (contacts[index].getFirstName().length() > 0)
    {
        cout << "CONTACT #" << index << "\n";
        cout << setw(5)
        << "First Name: " << contacts[index].getFirstName() << "\n"
        << "Last Name: " << contacts[index].getLastName() << "\n"
        << "Nickname: " << contacts[index].getNickname() << "\n"
        << "Login: " << contacts[index].getLogin() << "\n"
        << "Postal Address: " << contacts[index].getPostAddress() << "\n"
        << "Email Address: " << contacts[index].getEmailAddress() << "\n"
        << "Phone Number: " << contacts[index].getPhoneNumber() << "\n"
        << "Birthday: " << contacts[index].getBirthdate() << "\n"
        << "Favorite Meal: " << contacts[index].getFavoriteMeal() << "\n"
        << "Underwear Color: " << contacts[index].getUnderwearColor() << "\n"
        << "Darkest Secrret: " << contacts[index].getDarkSecret() << "\n";
    }
    else
    {
        cout << "ERROR CONTACT NOT FOUND\n";
    }
    cout << "------------------------------------------------------------------\n";
}