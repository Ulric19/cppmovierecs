class Film {
  public:
    Film(String description, Person* w, Person* d, Person* a, String* c, float ratings, float earnings);
    
    String getDescription();
    Person* getWriter();
    Person* getDirector();
    Person* getProducer();
    Person* getActors();
    String getCharacters();
    float getRating();
    float getEarnings();

  private:
    MAX_PEOPLE = 10;
    String description;
    Person writer[MAX_PEOPLE];
    Person directors[MAX_PEOPLE];
    Person producers[MAX_PEOPLE];
    Person actors[MAX_PEOPLE];
    String characters[MAX_PEOPLE];
    float rating;
    float earnings;

  }

