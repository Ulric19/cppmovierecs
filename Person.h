#ifndef PERSON_H
#define	PERSON_H
//Resolves errors around Film not being detected//
class Film;
#include <string>
class Person{
public:
Person();
Person(std::string name,Film* cT, int aS);
std::string getName();
void setName(std::string);
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
