
#ifndef PERSON_H
#define	PERSON_H
#include "Person.h"
#endif	/* PERSON_H */


#ifndef FILM_H
#define FILM_H
#include "Film.h"
#endif //FILM_H

class Person{
public:
    Person(std::string bio, sex gender, int activeSince);
    Film* getContributedTo();
    void addContributedTo(Film* film);
    std::string getBio();
    void setBio(std::string s);
    sex getSex();
    void setSex(enum sex);
    int getActiveSince();
    void setActiveSince(int y);
private:
    std::list<Film*> contributedTo;
    int nContributedTo; //Unsure of this?
    std::string bio;
    sex ex;
    int activeSince;
};



