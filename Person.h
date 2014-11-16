#ifndef FILM_H
#define	FILM_H
#include <string>
class Person;
enum type{comedy, horror, action, drama, mystery, science_fiction, music, war, western,undefined};
enum rating{G, PG, PG_13, R, NC_17, not_specified};
class Film {
public:
Film();
Film(std::string t, Person d, Person actor, Person actress, float rating, int mpaa, int released, type g, int a );
std::string getTitle();
void setTitle(std::string name_);
Person getDirector();
void setDirector(Person);
Person getActor();
void setActor(Person actor_);
void setActor(Person* actor_);
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
int mpaa;//Should this be enum?
int yearReleased;//Not particularly pertinant in recommendation process unless patern is detected
type genre;//Important
int awards;//Along with ratings, is a good indicator of quality. It would be nice is 
/*program could determine if a particular user had a preference to highly critically rated
 films, and highly awarded films...*/
};
#endif	/* FILM_H */
