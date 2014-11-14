class Person{
public:
    Person(Film contrubutedTo[], std::string bio, Gender gender, int activeSince);
    Film* getContributedTo();
    void addContributedTo(Film* film);
    std::string getBio();
    void setBio(std::string s);
    Gender getGender();
    void setGender(enum Gender);
    int getActiveSince();
    void setActiveSince(int y);
private:
    Film contributedTo[];
    int numberContributedTo; //Unsure of this?
    std::string bio;
    Gender gender;
    int activeSince;
};

