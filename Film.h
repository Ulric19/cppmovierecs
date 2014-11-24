#include <string>
#include <vector>
#ifndef PERSON_H
#define	PERSON_H
#include "Person.h"
#endif
#ifndef FILM_H
#define	FILM_H

using namespace std;
enum rating{G, PG, PG_13, R, NC_17, not_specified};
class Person;

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
friend bool operator==(Film & lhs, Film & rhs);
int checkVector(std::vector<Film*> a);
private:

std::string title;
int rating;
int mpaa;
int yearReleased;
std::string genre;
int awards;
};

#endif	/* FILM_H */
