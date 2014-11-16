#ifndef USER_H
#define	USER_H
#include <vector>
using namespace std;
class User{
public:
User( std::string const &uName, std::string const &pw);
User();
std::string getUserName();
void setUserName(std::string uName);
std::string getPassword();
void setPassword(std::string pw);
std::vector<Film> getLikedFilms();
std::vector<Person> getLikedPeople();
std::vector<type> getLikedGenres();
void addLikedFilm(Film* f);
//*void genRecommendations();
int scoreFilm();
private:
std::string username;
std::string password;//Plaintext...
vector<Film> filmArray;
vector<type> genreArray;
vector<Person> personArray;//Needs to be populated from the liked films array
int nLikedGenres;
int nLikedFilms;
int nLikedPeople;
};
#endif	/* USER_H */
