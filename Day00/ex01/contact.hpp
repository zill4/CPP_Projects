#include <iostream>
#include <string>

using namespace std;

class Contact 
{
    private:
        string firstName;
        string lastName;
        string nickname;
        string login;
        string postalAddress;
        string emailAddress;
        string phoneNumber;
        string birthDate;
        string favoriteMeal;
        string underwearColor;
        string darkSecret;
    public:
        //Constructor
        Contact()
        {
             firstName = "";
             lastName = "";
             nickname = "";
             login = "";
             postalAddress = "";
             emailAddress = "";
             phoneNumber = "";
             birthDate = "";
             favoriteMeal = "";
             underwearColor = "";
             darkSecret = "";
        }
        Contact(string firstName,
        string lastName,
        string nickname,
        string login,
        string postalAddress,
        string emailAddress,
        string phoneNumber,
        string birthDate,
        string favoriteMeal,
        string underwearColor,
        string darkSecret)
        {
            firstName = firstName;
            lastName = lastName;
            nickname = nickname;
            login = login;
            postalAddress = postalAddress;
            emailAddress = emailAddress;
            phoneNumber = phoneNumber;
            birthDate = birthDate;
            favoriteMeal = favoriteMeal;
            underwearColor = underwearColor;
            darkSecret = darkSecret;
        }
        //Mutators
        void setFirstName(string fname) {firstName = fname;}
        void setLastName(string lname) {lastName = lname;}
        void setNickname(string nname) {nickname = nname;}
        void setLogin(string lin) {login = lin;}
        void setPostAddress(string padd) {postalAddress = padd;}
        void setEmailAddress(string eadd) {emailAddress = eadd;}
        void setPhoneNumber(string phone) {phoneNumber = phone;}
        void setBirthdate(string bday) {birthDate = bday;}
        void setFavoriteMeal(string fmeal) {favoriteMeal = fmeal;}
        void setUnderwearColor(string color) {underwearColor = color;}
        void setDarkSecret(string secret) {darkSecret = secret;}
        //Accessors
        string getFirstName() {return (firstName);}
        string getLastName() {return(lastName);}
        string getNickname() {return(nickname);}
        string getLogin() {return(login);}
        string getPostAddress() {return(postalAddress);}
        string getEmailAddress() {return(emailAddress);}
        string getPhoneNumber() {return(phoneNumber);}
        string getBirthdate() {return(birthDate);}
        string getFavoriteMeal() {return(favoriteMeal);}
        string getUnderwearColor() {return(underwearColor);}
        string getDarkSecret() {return(darkSecret);}
}

