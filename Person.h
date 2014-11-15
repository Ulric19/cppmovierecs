    /* 
 * File:   Person.h
 * Author: Karl
 *
 * Created on November 8, 2014, 2:37 PM
*/

#ifndef PERSON_H
#define	PERSON_H
//Resolves errors around Film not being detected//
class Film;
#include <string>
class Person{
public:
    Person(std::string name,Film* cT, int aS);
    Film* getFilms();
    void addFilm(Film*);
    int getActiveSince();
    void setActiveSince(int y);
private:
    std::string name;
    Film* contributedTo[];
    int activeSince;
};

#endif	/* PERSON_H */
