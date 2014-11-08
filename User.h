class User {
  public:
    User(String uName, String pw, Film* films, Person* people);
    String getUserName();
    String getPassword();
    Film* getLikedFilms();
    Person* getLikedPeople();

  private:
    String username;
    String pasword;//Plaintext...
    Film* likedFilms;
    Person* likedPeople;
}
