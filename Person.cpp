
#include "Film.h"

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum Gender {Male,Female};
class Person{
public:
Person(Film contrubutedTo[], string bio, Gender gender, int activeSince);
Film* getContributedTo();
void addContributedTo(Film* film);
string getBio();
void setBio(string s);
Gender getGender();
void setGender(enum Gender);
int getActiveSince();
void setActiveSince(int y);
private:
Film contributedTo[];
int numberContributedTo; //Unsure of this?
string bio;
Gender gender;
int activeSince;
};

/*
Person::Person(Film contrubutedTo[], string bio, Gender gender, int activeSince){
    
};
*/
void Person::setGender(Gender g){
    gender = g;
};
Gender Person::getGender(){
    return gender;
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

Film* Person::getContributedTo(){
    return contributedTo;
};
/*
void Person::addContributedTo(Film* film){
    contributedTo[numberContributedTo++]=film;
}
 * */
