
#include "Film.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person{
    
public:
Person();
Person(std::string name,std::vector<Film*>, int activeSince);
void setName(std::string);
std::string getName();
std::vector<Film*> getFilms();
void addFilm(Film *film);
int getActiveSince();
void setActiveSince(int y);
int checkVector(vector<Person*> a);

private:
std::string name;
std::vector<Film*> contributedTo;
int activeSince;
};

Person::Person(){
name="";
contributedTo.clear();
contributedTo.reserve(128);
activeSince=0;
};
Person::Person(string name,vector<Film*> contrubutedTo, int activeSince) : name(name), contributedTo(contributedTo), activeSince(activeSince){
};
//Needs to iterate over all movies associated with a person, and store the lowest value;
void Person::setName(string n){
    name=n;
}
string Person::getName(){
    //cout<<"\nName: "<<name;
    return name;
};
void Person::setActiveSince(int as){
    activeSince=as;
};
int Person::getActiveSince(){
    cout<<"\nActive Since: "<<activeSince;
    return activeSince;
};

void Person::addFilm(Film *f){
    contributedTo.end();
    contributedTo.push_back(f);
};
//
vector<Film*> Person::getFilms(){
    return contributedTo;
};

int Person::checkVector(vector<Person*> a){
    int i=0;
    while(i<a.size()){
        if(a[i]->getName()==this->getName()) return i;
        i++;
    }
    return -1;
};
