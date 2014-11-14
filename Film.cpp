
#include "Person.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <array>

using namespace std;

const int MAX_PEOPLE=100;

class Film {
public:
    Film(string n,string desc, float ratings, float earned, int year, int month, int day);
    string getName();    
    string getDescription();
    Person* getWriter();
    Person* getDirector();
    Person* getProducer();
    Person* getActors();
    string getCharacters();
    float getRating();
    float getEarnings();
    int getYearReleased();
    int getMonthReleased();
    int getDayReleased();
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
    void setMonthReleased(int);
    void setDayReleased(int);
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
    int monthReleased;
    int dayReleased;
};
Film::Film(string n,string desc, float ratings, float earned, int year, int month, int day) : name(n), description(desc), earnings(earned), rating(ratings), yearReleased(year), monthReleased(month), dayReleased(day){

};
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
