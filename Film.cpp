#include "Film.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

enum sex {Male,Female};
class Person{
public:
    Person( string bio, sex gender, int activeSince);
    Film* getContributedTo();
    void addContributedTo(Film* film);
    string getBio();
    void setBio(string s);
    sex getSex();
    void setSex(enum sex);
    int getActiveSince();
    void setActiveSince(int y);
private:
    std::list<Film*> contributedTo;
    int nContributedTo; //Unsure of this?
    string bio;
    sex ex;
    int activeSince;
};


Person::Person(string b, sex s, int year) : bio(b),ex(s),activeSince(year){
};

void Person::setSex(sex g){
    ex = g;
};
sex Person::getSex(){
    return ex;
};

void Person::setBio(string s){
   bio=s;
};
string Person::getBio(){
    return bio;
};

void Person::setActiveSince(int as){
   activeSince=as;
};
int Person::getActiveSince(){
    return activeSince;
};
//getHistory may be better. Should return all films the person has been involved with
Film* Person::getContributedTo(){
    return contributedTo;
};
/*
void Person::contributedTo(Film* film){
    contributedTo[numberContributedTo++]=film;
}
 * */
//Add film to list
