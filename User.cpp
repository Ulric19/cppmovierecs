#include <cstdlib>
#include <iostream>
#include <string>
#include "Film.h"
#include "Person.h"
using namespace std;


class User{
public:
User( std::string const &uName, std::string const &pw, Film* films, Person* people);
User( std::string const &uName, std::string const &pw);
User();
string getUserName();
string getPassword();
Film* getLikedFilms();
Person* getLikedPeople();
void addLikedPerson(Person p);
void addLikedFilm(Film f);
void setUserName(string uName);
void setPassword(string pw);


private:
std::string username;
std::string password;//Plaintext...
Film* likedFilms;
Person* likedPeople;
int nLikedFilms;
int nLikedPeople;
};

User::User() : username(""), password(""){
    cout << "DEFAULT USER CONFIGURATION";
};
User::User( std::string const &uName,  std::string const &pw) : username(uName), password(pw){
    cout << "Username: "  << username << "\nPassword: " << password;
};
User::User( std::string const &uName,  std::string const &pw, Film* films, Person* people) : username(uName), password(pw), likedFilms(films), likedPeople(people){
};
string User::getUserName(void){
    return username;
};
string User::getPassword(void){
    return password;
};
Film* User::getLikedFilms(void){
    return likedFilms;
};
Person* User::getLikedPeople(void){
    return likedPeople;
};
void User::addLikedPerson(Person p){
    likedPeople[nLikedPeople++];
};
void User::addLikedFilm(Film f){
    likedFilms[nLikedPeople++];
};
void User::setUserName(string uName){
    username=uName;
};
void User::setPassword(string pw){
    password=pw;
};
