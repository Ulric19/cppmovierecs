
#include "Film.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Person{
public:
Person();
Person(string name,Film contrubutedTo[], int activeSince);
void setName(string);
string getName();
Film* getFilms();
void addFilm(Film* film);
int getActiveSince();
void setActiveSince(int y);
private:
string name;
//ADT of Films. Array of some size makes sense?
Film contributedTo[];
int activeSince;
};
Person::Person(){
name="";
//contributedTo[]=NULL;
activeSince=0;
};
Person::Person(string name,Film contrubutedTo[], int activeSince) : name(name), contributedTo(contributedTo), activeSince(activeSince){
};
//Needs to iterate over all movies associated with a person, and store the lowest value;
void Person::setName(string n){
    name=n;
}
string Person::getName(){
    cout<<"\nName: "<<name;
    return name;
};
void Person::setActiveSince(int as){
activeSince=as;
};
int Person::getActiveSince(){
cout<<"\nActive Since: "<<activeSince;
    return activeSince;
};
/*
void Person::addFilm(Film* f){
contributedTo+=f;
};
*/
Film* Person::getFilms(){
return contributedTo;
};
