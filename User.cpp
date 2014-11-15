#include <cstdlib>
#include <iostream>
#include <string>
#include "Film.h"
#include "Person.h"

using namespace std;
class User{
public:
    User( string const &uName, string const &pw, Film* films, Person* people);
    User( string const &uName, string const &pw);
    User();
    string getUserName();
    void setUserName(string uName);
    string getPassword();
    void setPassword(string pw);
    Film* getLikedFilms();
    void addLikedFilm(Film f);
private:
    string username;
    string password;//Plaintext...
    Film* likedFilms;
    int nLikedFilms;
};
User::User() : username(""), password(""){
cout << "DEFAULT USER CONFIGURATION";
};
User::User( std::string const &uName, std::string const &pw) : username(uName), password(pw){
cout << "Username: " << username << "\nPassword: " << password;
};
User::User( std::string const &uName, std::string const &pw, Film* films) : username(uName), password(pw), likedFilms(films){
};

string User::getUserName(void){
    return username;
};
void User::setUserName(string uName){
    username=uName;
};

string User::getPassword(void){
    return password;
};
void User::setPassword(string pw){
    password=pw;
};

Film* User::getLikedFilms(void){
    return likedFilms;
};
//ADT for storage needs to be defined
void User::addLikedFilm(Film f){
    likedFilms=f;
};
