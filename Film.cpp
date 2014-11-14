#include "Person.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <array>

using namespace std;

const int MAX_PEOPLE=100;

class Film {
public:
Film(string name,string description, Person* w, Person* d, Person* a, Person* p, string* c, float ratings, float earnings) : name(name), description(description), writers(w), directors(d), producers(p), characters(c), earnings(), ratings(ratings)   ;
    string getDescription();
    Person* getWriter();
    Person* getDirector();
    Person* getProducer();
    Person* getActors();
    string getCharacters();
    float getRating();
    float getEarnings();
    int getYearReleased();
    string getName();
    void setName(string name_);
    void setDescription(string desc_);
    void setWriter(Person writer_);
    void setDirector(Person director_);
    void setProducer(Person producor_);
    void setActors(Person actor_);
    void setCharacters(string);
    void setRating(float);
    void setEarnings(float);
    void setYearReleased(int);
private:
    string name;
    string description;
    Person writers[];
    int nWriters;
    Person directors[];
    int nDirectors;
    Person producers[];
    int nProducers;
    Person actors[];
    int nActors;
    string characters[];
    int nCharacters;
    float rating;
    float earnings;
    int yearReleased;
    int monthReleased[13]={1,2,3,4,5,6,7,8,9,10,11,12};
    int dayReleased;
};
/*
Film::Film(string description_, Person* writer_, Person* director_, Person* actor_, string* characters_, float ratings_, float earnings_){

};
*/
string Film::getDescription(){
    return description;
};
void Film::setDescription(string desc_){
    description=desc_;
};

Person* Film::getWriter(){
    return writers;
};
void Film::setWriter(Person writer_){
    writers[nWriters++]=writer_;
};

Person* Film::getDirector(){
    return directors;
};
void Film::setDirector(Person director_){
    directors[nDirectors++]=director_;
};

Person* Film::getProducer(){
    return producers;
};
void Film::setProducer(Person producer_){
    producers[nProducers++]=producer_;
};

Person* Film::getActors(){
    return actors;
};
void Film::setActors(Person actor_){
    actors[nActors++]=actor_;
};

/*
string* Film::getCharacters(){};
void Film::setCharacters(string*){};
*/
float Film::getRating(){
    return rating;
};
void Film::setRating(float rating_){
    rating=rating_;
};

float Film::getEarnings(){
    return earnings;
};
void Film::setEarnings(float earnings_){
    earnings=earnings_;
};
