
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "Person.h"

using namespace std;
enum type{comedy, horror, action, drama, mystery, science_fiction, music, war, western,undefined};
enum rating{G, PG, PG_13, R, NC_17, not_specified};


class Film {

public:
Film();
Film(std::string, Person*, Person*, Person*, float, int, int, type, int);
std::string getTitle();
void setTitle(const std::string& name);
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
type getGenre();
void setGenre(type);
int getAwards();
void setAwards(int);

private:
std::string title;
Person* director;
Person* actor;
Person* actress;
int rating;
int mpaa;
int yearReleased;
type genre;
int awards;
};

Film::Film(){
    title="";
    director=NULL;
    actor=NULL;
    actress=NULL;
    rating=0;
    mpaa=not_specified;
    genre=undefined;
    awards=0;
};
Film::Film(string t, Person *d, Person *actor_, Person *actress_, float rating, int mpaa, int released, type g, int a ): title(t), director(d), actor(actor_), actress(actress_), rating(rating), mpaa(mpaa), yearReleased(released), genre(g), awards(a){};
string Film::getTitle(){
    cout<<"\nTitle: "<<title;
    return title;
}
void Film::setTitle(const std::string& n){

title=n;
}

Person* Film::getDirector(){
    cout<<"\nDirector: "<<director->getName();
    return director;
};
void Film::setDirector( Person *director_){
director=director_;
};
void Film::setDirector( Person director_){
director=&director_;
};

Person* Film::getActor(){
    cout<<"\nLead Actor: "<<actor->getName();
    return actor;
};

void Film::setActor(Person *actor_){
    cout<<actor_->getName();
    actor=actor_;
};
void Film::setActor(Person actor_){
    cout<<actor_.getName();
    actor=&actor_;
};

Person* Film::getActress(){
        cout<<"\nLead Actress: "<<actress->getName();
return actress;
};
void Film::setActress(Person *actress_){
actress=actress_;
};
void Film::setActress(Person actress_){
actress=&actress_;
};

int Film::getRating(){
        cout<<"\nAverage Review: "<<rating;
return rating;
};
void Film::setRating(int rating_){
rating=rating_;
};

int Film::getMPAA(){
        cout<<"\nRated: "<<mpaa;
return mpaa;
};
void Film::setMPAA(int m){
mpaa=m;
};

type Film::getGenre(){
        cout<<"\nGenre: "<<genre;
return genre;
};
void Film::setGenre(type g){
genre=g;
};

int Film::getAwards(){
        cout<<"\nNumber of Awards: "<<awards;
return awards;
};
void Film::setAwards(int a){
awards=a;
};
