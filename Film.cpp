#include "Person.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MAX_PEOPLE=100;

enum type{comedy, tradgedy};
class Film {
public:
    Film(string t, Person d, Person actor, Person actress, float rating, int mpaa, int released, type g, int a );
    string getTitle();
    void setTitle(string name_);
    Person getDirector();
    void setDirector(Person);
    Person getActor();
    void setActor(Person actor_);
    Person getActress();
    void setActress(Person actress_);
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
    string title;
    Person director;
    Person actor;
    Person actress;
    int rating;
    int mpaa;
    int yearReleased;
    type genre;
    int awards;
};
Film::Film(string t, Person d, Person actor_, Person actress_, float rating, int mpaa, int released, type g, int a ): title(t), director(d), actor(actor_), actress(actress_), rating(rating), mpaa(mpaa), yearReleased(released), genre(g), awards(a){};

string Film::getTitle(){
    return title;
}
void Film::setTitle(string n){
    title=n;
}

Person Film::getDirector(){
    return director;
};
void Film::setDirector(Person director_){
    director=director_;
};

Person Film::getActor(){
    return actor;
};
void Film::setActor(Person actor_){
    actor=actor_;
};

Person Film::getActress(){
    return actress;
};
void Film::setActress(Person actress_){
    actress=actress_;
}

int Film::getRating(){
    return rating;
};
void Film::setRating(int rating_){
    rating=rating_;
};

int Film::getMPAA(){
    return mpaa;
}
void Film::setMPAA(int m){
    mpaa=m;
}

type Film::getGenre(){
    return genre;
};
void Film::setGenre(type g){
    genre=g;
};

int Film::getAwards(){
    return awards;
};
void Film::setAwards(int a){
    awards=a;
};




