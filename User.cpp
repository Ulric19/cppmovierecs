
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "Film.h"
#include "Person.h"
using namespace std;
class User{
public:
User( string const &uName, string const &pw);
User();
string getUserName();
void setUserName(string uName);
string getPassword();
void setPassword(string pw);
vector<Film> getLikedFilms();
vector<Person> getLikedPeople();
vector<type> getLikedGenres();
void addLikedFilm(Film);
//*void genRecommendations();
int scoreFilm(Film);
private:
string username;
string password;//Plaintext...
vector<Film> filmArray;
vector<type> genreArray;
vector<Person> personArray;//Needs to be populated from the liked films array
int nLikedGenres;
int nLikedFilms;
int nLikedPeople;
};
User::User() : username(""), password(""), nLikedFilms(0){
cout << "DEFAULT USER CONFIGURATION";
filmArray.clear();
};
User::User( std::string const &uName, std::string const &pw) : username(uName), password(pw){
cout << "Username: " << username << "\nPassword: " << password;
};
string User::getUserName(void){
cout<<"\nUsername: "<<username;
    return username;
};
void User::setUserName(string uName){
username=uName;
};
string User::getPassword(void){
    cout<<"\nPassword: "<<password;
return password;
};
void User::setPassword(string pw){
password=pw;
};
vector<Film> User::getLikedFilms(void){
return filmArray;
};
vector<Person> User::getLikedPeople(void){
return personArray;
};
vector<type> User::getLikedGenres(void){
return genreArray;
};

//Uses vectors. Automatically adds all important variables to liked arrays for a person
void User::addLikedFilm(Film f){
    //add films
    filmArray.at(nLikedFilms++)=f;
    //add people
    personArray.at(nLikedPeople++)=f.getActor();
    personArray.at(nLikedPeople++)=f.getDirector();
    personArray.at(nLikedPeople++)=f.getActress();
    //add genre
    genreArray.at(nLikedGenres++)=f.getGenre();
};

int User::scoreFilm(Film f){
    int total=1;
    int counter=0;
    //Not sure why it says the Arrays and nLikedFilms is out of scope
    while(counter<nLikedFilms){
        if(f.getDirector().getName()==personArray.at(counter).getName()||f.getActress().getName()==personArray.at(counter).getName()||f.getActor().getName()==personArray.at(++counter).getName()){
            total+=5;
        }
    }
    counter=0;
    while(counter<nLikedFilms){     
        if(f.getGenre()==(genreArray.at(++counter))){
            total+=10;
        }
    }
    total=(total+pow(f.getRating(), 1.5));
    total=(pow(total, 1.6*(f.getAwards()+1)));
    return total;
};
