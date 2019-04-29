#include <phonebook.hpp>
#include <contact.hpp>
#include <iostream>

using namespace std;



Contact *makeContact()
{
    // Making a new contact
    Contact *contact = new Contact();
    // Will temporarily store the contact info as it is filled in.
    string temp;
    cout << "\nFirstName: ";
    cin >> temp;
    contact->setFirstName(temp);
    cout << "\nLast Name: ";
    cin >> temp;
    contact->setLastName(temp);
    cout << "\nNickname: ";
    cin >> temp;
    contact->setNickname(temp);
    cout << "\nLogin: ";
    cin >> temp;
    contact->setLogin(temp);
    cout << "\nPostal Address: ";
    cin >> temp;
    contact->setPostAddress(temp);
    cout << "\nEmail Address: ";
    cin >> temp;
    contact->setEmailAddress(temp);
    cout << "\nPhone Number: ";
    cin >> temp;
    contact->setPhoneNumber(temp);
    cout << "\nBirthday Date: ";
    cin >> temp;
    contact->setBirthdate(temp);
    cout << "\nFavorite Meal: ";
    cin >> temp;
    contact->setFavoriteMeal(temp);
    cout << "\nUnderwear Color: ";
    cin >> temp;
    contact->setUnderwearColor(temp);
    cout << "\nDarkest Secret: ";
    cin >> temp;
    contact->setDarkSecret(temp);
    cout << "------------------------------------------------------------------\n";
    return (contact);
}
/*
 * The main idea is to loop through ADD, SEARCH, EXIT
 */
int main(int argc, char **argv)
{
    // ADD
    // makeContact(), addContact(contact)
    // SEARCH
    // viewContacts, viewIndex(int index)->viewContact(int index)
    // EXIT
    // freeContacts, serialize phonebook...
}
