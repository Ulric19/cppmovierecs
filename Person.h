    /* 
 * File:   Person.h
 * Author: Karl
 *
 * Created on November 8, 2014, 2:37 PM
 */
#ifndef FILM_H
#define FILM_H
#include "Film.h"
#endif 
#ifndef PERSON_H
#define	PERSON_H
#include <string>
#include <vector>
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

private:
std::string name;
std::vector<Film*> contributedTo;
int activeSince;
};

#endif	/* PERSON*/

