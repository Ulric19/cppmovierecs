#ifndef FILM_H
#define	FILM_H
#include <string>
class Person;

enum type{comedy, tradgedy};
class Film {
public:
    Film(std::string t, Person d, Person actor, Person actress, float rating, int mpaa, int released, type g, int a );
    std::string getTitle();
    void setTitle(std::string name_);
    Person getDirector();
    void setDirector(Person);
    Person getActor();
    void setActor(Person actor_);
    Person getActress();
    void setActress(Person actress_);
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

