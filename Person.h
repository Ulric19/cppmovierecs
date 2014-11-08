class Person {
  public:
    Person(Film contrubutedTo, String bio, Gender gender, int activeSince);
    
    Film* getContributedTo();
    String getBio();
    Gender getGender();
    int getActiveSince();

  private:
    Film contributedTo[];
    String bio;

    enum Gender {Male,Female};
    Gender gender;

    int activeSince;
}
