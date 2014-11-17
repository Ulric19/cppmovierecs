

#ifndef FILM_H
#define	FILM_H
#include <string>
#include <vector>
using namespace std;
const int MAX_PEOPLE=100;
enum type{comedy, horror, action, drama, mystery, science_fiction, music, war, western,undefined};
enum rating{G, PG, PG_13, R, NC_17, not_specified};
class Person;

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

#endif	/* FILM_H */
