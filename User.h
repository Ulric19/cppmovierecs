class User {
public:
User(string uName, string pw, Film* films, Person* people);
User(string uName, string pw);
string getUserName();
string getPassword();
Film* getLikedFilms();
Person* getLikedPeople();
void addLikedPerson(Person p);
void addLikedFilm(Film f);
void setUserName(string uName);
void setPassword(string pw);


private:
string username;
string password;//Plaintext...
Film* likedFilms;
Person* likedPeople;
int nLikedFilms;
int nLikedPeople;
};


User::User(string uName, string pw){
    username=uName;
    password=pw;
};
User::User(string uName, string pw, Film* films, Person* people){
    username=uName;
    password=pw;
    likedFilms=films;
    likedPeople=people;
};
string User::getUserName(){
    return username;
};
string User::getPassword(){
    return password;
};
Film* User::getLikedFilms(){
    return likedFilms;
};
Person* User::getLikedPeople(){
    return likedPeople;
};
void User::addLikedPerson(Person p){
    likedPeople[nLikedPeople++];
};
void User::addLikedFilm(Film f){
    likedFilms[nLikedPeople++];
};
void User::setUserName(string uName){
    username=uName;
};
void User::setPassword(string pw){
    password=pw;
};
