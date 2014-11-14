
#ifndef FILM_H
#define	FILM_H

class Film {
public:
Film(std::string description, Person* w, Person* d, Person* a, std::string* c, float ratings, float earnings);
std::string getDescription();
Person* getWriter();
    Person* getDirector();
    Person* getProducer();
    Person* getActors();
    std::string getCharacters();
    float getRating();
    float getEarnings();
    int getYearReleased();
    void setDescription(std::string desc_);
    void setWriter(Person writer_);
    void setDirector(Person director_);
    void setProducer(Person producor_);
    void setActors(Person actor_);
    void setCharacters(std::string);
    void setRating(float);
    void setEarnings(float);
    void setYearReleased(int);
private:
    std::string description;
    Person writers[];
    int nWriters;
    Person directors[];
    int nDirectors;
    Person producers[];
    int nProducers;
    Person actors[];
    int nActors;
    std::string characters[];
    int nCharacters;
    float rating;
    float earnings;
    int yearReleased;
};


#endif	/* FILM_H */

