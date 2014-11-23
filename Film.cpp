
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "Person.h"

using namespace std;
enum rating{G, PG, PG_13, R, NC_17, not_specified};


class Film {

public:
Film();
Film(std::string, Person*, Person*, Person*, int, int, int, std::string, int);
std::string getTitle();
void setTitle(const std::string name);
Person* getDirector();
void setDirector(Person*);
void setDirector(Person);
Person* getActor();
void setActor(Person*);
void setActor(Person);
Person* getActress();
void setActress(Person*);
void setActress(Person);
int getRating();
void setRating(int);
int getYearReleased();
void setYearReleased(int);
int getMPAA();
void setMPAA(int);
std::string getGenre();
void setGenre(std::string);
int getAwards();
void setAwards(int);
Person* director;
Person* actor;
Person* actress;
int checkVector(std::vector<Film*>);

private:

std::string title;
int rating;
int mpaa;
int yearReleased;
std::string genre;
int awards;
};

Film::Film(){
    title="";
    director=NULL;
    actor=NULL;
    actress=NULL;
    rating=0;
    mpaa=not_specified;
    genre="";
    awards=0;
};

Film::Film(std::string t, Person *d, Person *actor_, Person *actress_, int rating, int mpaa, int released, std::string g, int a) : title(t), director(d), actor(actor_), actress(actress_), rating(rating), mpaa(mpaa), yearReleased(released), genre(g), awards(a){
};

string Film::getTitle(){
    //cout<<"\nTitle: "<<title;
    return title;
}
void Film::setTitle(const std::string n){
title=n;
}

Person* Film::getDirector(){
    //cout<<"\nDirector: "<<director->getName();
    return director;
};
void Film::setDirector( Person *director_){
director=director_;
};
void Film::setDirector( Person director_){
director=&director_;
};

Person* Film::getActor(){
    //cout<<"\nLead Actor: "<<actor->getName();
    return actor;
};

void Film::setActor(Person *actor_){
    //cout<<actor_->getName();
    actor=actor_;
};
void Film::setActor(Person actor_){
    //cout<<actor_.getName();
    actor=&actor_;
};

Person* Film::getActress(){
        //cout<<"\nLead Actress: "<<actress->getName();
return actress;
};
void Film::setActress(Person *actress_){
actress=actress_;
};
void Film::setActress(Person actress_){
actress=&actress_;
};

int Film::getRating(){
        //cout<<"\nAverage Review: "<<rating;
    return rating;
};
void Film::setRating(int rating_){
    rating=rating_;
};

void Film::setYearReleased(int y){
    yearReleased = y;
}
int Film::getYearReleased(){
    return yearReleased;
}
    

int Film::getMPAA(){
        //cout<<"\nRated: "<<mpaa;
return mpaa;
};
void Film::setMPAA(int m){
mpaa=m;
};

std::string Film::getGenre(){
        //cout<<"\nGenre: "<<genre;
return genre;
};
void Film::setGenre(std::string g){
    genre=g;
};

int Film::getAwards(){
        cout<<"\nNumber of Awards: "<<awards;
return awards;
};
void Film::setAwards(int a){
awards=a;
};

//This needs to also compare year released
// as well as title, for cases such as 
// Island of Dr. Moreau or King Kong
int Film::checkVector(vector<Film*> a){
    int i=0;
    while(i<a.size()){
        if(a[i]->getTitle()==this->getTitle()&&a[i]->getYearReleased()==this->getYearReleased()) return i;
        i++;
    }
    return -1;
};
