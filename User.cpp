
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
User( std::string const &uName, std::string const &pw);
User();
std::string getUserName();
void setUserName(std::string uName);
std::string getPassword();
void setPassword(std::string pw);
std::vector<Film*> getLikedFilms();
std::vector<Person*> getLikedPeople();
std::vector<std::string> getLikedGenres();
void addLikedFilm(Film*);
int scoreFilm(Film*);
int checkVector(vector<User*> a);
private:
std::string username;
std::string password;//Plaintext...
std::vector<Film*> filmArray;
std::vector<std::string> genreArray;
std::vector<Person*> personArray;//Needs to be populated from the liked films array
int nLikedGenres;
int nLikedFilms;
int nLikedPeople;
};

User::User() : username(""), password(""), nLikedFilms(0){
cout << "DEFAULT USER CONFIGURATION";
filmArray.clear();
personArray.clear();
genreArray.clear();
nLikedGenres=0;
nLikedPeople=0;
nLikedFilms=0;
};

//Can the constructor check to make sure an object with these same values doesnt already exit?
User::User( std::string const &uName, std::string const &pw) : username(uName), password(pw){
cout << "Username: " << username << "\nPassword: " << password;
filmArray.clear();
personArray.clear();
genreArray.clear();
nLikedGenres=0;
nLikedPeople=0;
nLikedFilms=0;
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
vector<Film*> User::getLikedFilms(void){
return filmArray;
};
vector<Person*> User::getLikedPeople(void){
return personArray;
};

vector<std::string> User::getLikedGenres(void){
return genreArray;
};
//Uses vectors. Automatically adds all important variables to liked arrays for a person
void User::addLikedFilm(Film* f){
//add films
filmArray[nLikedFilms++]=f;
//add people
personArray[nLikedPeople++]=f->actor;
personArray[nLikedPeople++]=f->director;
personArray[nLikedPeople++]=f->actress;
//add genre
genreArray[nLikedGenres++]=f->getGenre();
};
int User::scoreFilm(Film* f){
int total=1;
int counter=0;
while(counter<nLikedFilms){
    if(f->getDirector()->getName()==personArray[counter]->getName()||f->getActress()->getName()==personArray[counter]->getName()||f->getActor()->getName()==personArray[++counter]->getName()){
        total+=5;
    }
}
counter=0;
while(counter<nLikedGenres){
    if(f->getGenre()==(genreArray[++counter])){
        total+=10;
    }
}
total=(total+pow(f->getRating(), 1.5));
total=(pow(total, 1.6*(f->getAwards()+1)));
return total;
};


int User::checkVector(vector<User*> a){
    int i=0;
    while(i<a.size()){
        if(a[i]->getUserName()==this->getUserName()) return i;
        i++;
    }
    return -1;
};
