
#ifndef FILM_H
#define FILM_H
#include "Film.h"
#endif FILM_H /*  */

#ifndef PERSON_H
#define	PERSON_H

class Person {
public:
    Person(std::string name, Film* contrubutedTo, int activeSince);
    Film* getContributedTo();
    void addContributedTo(Film* film);
    int getActiveSince();
    void setActiveSince(int y);
private:
    std::string name;
    Film contributedTo[];
    int activeSince;
};

#endif	/* PERSON_H */



