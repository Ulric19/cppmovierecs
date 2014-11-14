class User {
public:
User( std::string const &uName, std::string const &pw, Film* films, Person* people);
User( std::string const &uName, std::string const &pw);
User();
std::string getUserName();
std::string getPassword();
Film* getLikedFilms();
Person* getLikedPeople();
void addLikedPerson(Person p);
void addLikedFilm(Film f);
void setUserName(std::string uName);
void setPassword(std::string pw);

private:
std::string username;
std::string password;//Plaintext...
Film* likedFilms;
Person* likedPeople;
int nLikedFilms;
int nLikedPeople;
};
