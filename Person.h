
#include <string>
#include <vector>
#ifndef FILM_H
#define FILM_H
#include "Film.h"
#endif 
#ifndef PERSON_H
#define	PERSON_H

class Film;

class Person{

public:
Person();
Person(std::string name,std::vector<Film*>, int activeSince);
void setName(std::string);
std::string getName();
std::vector<Film*> getFilms();
void addFilm(Film *film);
int getActiveSince();
void setActiveSince(int y);
int checkVector(std::vector<Person*> a);

private:
std::string name;
std::vector<Film*> contributedTo;
int activeSince;
};

#endif	/* PERSON*/

