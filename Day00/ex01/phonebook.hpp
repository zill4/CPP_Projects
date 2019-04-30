#include <iostream>
#include <string>
#include "contact.hpp"
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
            contactCount++;
            return (true);
        }
}

/*
 * Display the all current contacts
 */
void Phonebook::displayContacts()
{
    cout << setw(10) << " INDEX ";
    cout << setw(10) << " | " << "FIRST NAME";
    cout << setw(10) << " | " << "LAST NAME";
    cout << setw(10) << " | " << "NICKNAME" << "\n";
    if (contactCount > 0)
    {
        for (int i = 0; i < contactCount; i++)
        {
            cout << setw(10) << i;
            cout << setw(10) << " | " << contacts[i].getFirstName();
            cout << setw(10) << " | " << contacts[i].getLastName();
            cout << setw(10) << " | " << contacts[i].getNickname() << "\n";
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
        cout << "CONTACT # " << index << "\n";
        cout << "First Name: " << setw(15) << contacts[index].getFirstName() << "\n";
        cout << "Last Name: "<< setw(15) << contacts[index].getLastName() << "\n";
        cout << "Nickname: " << setw(15) << contacts[index].getNickname() << "\n";
        cout << "Login: " << setw(15) << contacts[index].getLogin() << "\n";
        cout << "Postal Address: "<< setw(15) << contacts[index].getPostAddress() << "\n";
        cout << "Email Address: "<< setw(15) << contacts[index].getEmailAddress() << "\n";
        cout << "Phone Number: "<< setw(15) << contacts[index].getPhoneNumber() << "\n";
        cout << "Birthday: " << setw(15) << contacts[index].getBirthdate() << "\n";
        cout << "Favorite Meal: " << setw(15) << contacts[index].getFavoriteMeal() << "\n";
        cout << "Underwear Color: " << setw(15) << contacts[index].getUnderwearColor() << "\n";
        cout << "Darkest Secrret: " << setw(15) << contacts[index].getDarkSecret() << "\n";
    }
    else
    {
        cout << "ERROR CONTACT NOT FOUND\n";
    }
    cout << "------------------------------------------------------------------\n";
    return (true);
}