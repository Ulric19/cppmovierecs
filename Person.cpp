#include "Film.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Person{
public:
    Person(string name,Film contrubutedTo[], int activeSince);
    Film* getFilms();
    void addFilm(Film* film);
    int getActiveSince();
    void setActiveSince(int y);
private:
    string name;
    Film contributedTo[];
    int activeSince;
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
Film* Person::getContributedTo(){
return contributedTo;
};
void Person::addFilm(Film* f){
    
};
Film* Person::getFilms(){
    
};
