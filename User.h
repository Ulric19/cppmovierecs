#include <vector>
#ifndef USER_H
#define	USER_H

using namespace std;
class User{

public:
User( std::string const &uName, std::string const &pw);
User();
std::string getUserName();
void setUserName(std::string uName);
std::string getPassword();
void setPassword(std::string pw);
std::vector<Film*> getLikedFilms();
std::vector<Person*> getLikedPeople();
std::vector<std::string> getLikedGenres();
void addLikedFilm(Film*);
float scoreFilm(Film*);
int checkVector(vector<User*> a);
vector<Film*> sortFilms(vector<Film*> f);

private:
std::string username;
std::string password;//Plaintext...
std::vector<Film*> filmArray;
std::vector<std::string> genreArray;
std::vector<Person*> personArray;//Needs to be populated from the liked films array
int checkLikedGenre(std::string a);
int nLikedGenres;
int nLikedFilms;
int nLikedPeople;

};

#endif	/* USER_H */
