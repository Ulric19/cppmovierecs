

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

private:

std::string title;
int rating;
int mpaa;
int yearReleased;
std::string genre;
int awards;
};

#endif	/* FILM_H */
