
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
float scoreFilm(Film*);
int checkVector(vector<User*> a);
private:
std::string username;
std::string password;//Plaintext...
std::vector<Film*> filmArray;
std::vector<std::string> genreArray;
std::vector<Person*> personArray;//Needs to be populated from the liked films array
int checkLikedGenre(std::string a);
vector<Film*> sortFilms(vector<Film*> f);
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
    int isThere=-1;
    isThere=f->checkVector(filmArray);
        if(isThere==-1){
            //cout<<"\nFilm has not yet been liked by user";
            filmArray.push_back(f);
            nLikedFilms++;
        }
        else{
            //cout<<"\nFilm already liked by user";
        }
//add people
    isThere=f->actor->checkVector(personArray);
        if(isThere==-1){
            //cout<<"\nNot yet liked by user(Person)";
            personArray.push_back(f->actor);
            nLikedPeople++;
        }
        else{
            //cout<<"\nPerson already liked by user";
            
        }
    isThere=f->actress->checkVector(personArray);
        if(isThere==-1){
            //cout<<"\nNot yet liked by user(Person)";
            personArray.push_back(f->actress);
            nLikedPeople++;
        }
        else{
            //cout<<"\nPerson already liked by user";
            
        }
    isThere=f->director->checkVector(personArray);
    if(isThere==-1){
        //cout<<"\nNot yet liked by user(Person)";
        personArray.push_back(f->director);
        nLikedPeople++;
    }
    else{
        //cout<<"\nPerson already liked by user";
            
        }
    isThere=checkLikedGenre(f->getGenre());
    if(isThere==-1){
        //cout<<"\nNot yet liked by user(Genre)";
        genreArray.push_back(f->getGenre());
        nLikedGenres++;
    }
    else{
        //cout<<"\nGenre already liked by user";
        }
};
//Not working at the moment...
float User::scoreFilm(Film* f){
    //instead of using a base of 1, any film gets a base score of its score
    float total=f->getRating();
    if(total==0){
        total=1;
    }
    int counter=0;
    //cout<<"Number of liked Films== "<<nLikedFilms<<"\nNumber of liked "<<nLikedPeople;
    while(counter<nLikedPeople){
        if(f->director->getName()==personArray[counter]->getName()||f->actress->getName()==personArray[counter]->getName()||f->actor->getName()==personArray[counter]->getName()){
            total+=10;
        }
        counter++;
    }
    //This process needs to be fine tuned...
    counter=0;
    while(counter<nLikedGenres){
        if(f->getGenre()==(genreArray[counter])){
            total+=15;
        }
        counter++;
    }
    total=(total+pow(total, 2));
    total=(pow(total, 1.6*(f->getAwards()+1)));
    return total;
};


int User::checkVector(vector<User*> a){
    int i=0;
    while(i<a.size()){
        if(a[i]->getUserName()==this->getUserName()){
            return i;
        }
        i++;
    }
    return -1;
};
int User::checkLikedGenre(std::string a){
    int i=0;
    while(i<genreArray.size()){
        if(a==genreArray[i]){
            return i;   
        }
        i++;
    }
    return -1;
};

//Method designed to take sort a vector array based on the scoreFilm() method.
//I HOPE THIS WORKS AS IT SHOULD... Hardly TESTED. It seemed to sort them in desc
//order, which is all I want. This is the last method I made, and most likely to
//be broken. 
vector<Film*> User::sortFilms(vector<Film*> f){
    vector<Film*> sortedFilms;
    int i=0;
    for(i;i<f.size();i++){
        int j=0;
        if(sortedFilms.empty()){
                sortedFilms.push_back(f[i]);
                //cout<<scoreFilm(f[i]);
                i++;
                continue;
        }
        //cout<<"\n"<<sortedFilms.size();
        while(j<sortedFilms.size()){
            float rating=scoreFilm(f[i]);
            if(rating>scoreFilm(sortedFilms[j])||rating==scoreFilm(sortedFilms[j])){
                //cout<<"\nInserting "<<rating<<" at index "<<j;
                sortedFilms.insert(sortedFilms.begin()+j, f[i]);
                break;
            }
            else{
                j++;
            }
        }
        //cout<<scoreFilm(f[i]);
        sortedFilms.push_back(f[i]);
    }
    return sortedFilms;
    
};
