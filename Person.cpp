#include "Film.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
class Person{
public:
    Person();
    Person(string name,Film contrubutedTo[], int activeSince);
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
void Person::setActiveSince(int as){
    activeSince=as;
};
int Person::getActiveSince(){
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
