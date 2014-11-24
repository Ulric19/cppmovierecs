

#include <iostream>
#include <cstdlib>
#include <string>
#include "Film.h"
#include "Person.h"
#include "User.h"
#include <fstream>
#include <sstream>
#include <algorithm>


using namespace std;
/*
 * 
 */   

main() {
    //Pre file input tasks
    vector <vector <string> > data;
    ifstream infile( "films" );

    string j("John");
    string pw("Password");
    User u;
    u.setUserName(j);
    u.setPassword(pw);
    u.getUserName();
    u.getPassword();

  while (infile)
  {
    string s;
    if (!getline( infile, s )) break;

    istringstream ss( s );
    vector <string> record;

    while (ss)
    {
        string s;
        if (!getline( ss, s, '\t' )) break;
        record.push_back( s );
    }
  data.push_back( record );
  }
  if (!infile.eof())
  {
    cerr << "Unexpected End of File.\n";
  }
  //Create a vector array of films to be added to by the file:
  vector<Film*> allFilms;
  vector<Person*> allPersons;
  vector<User*> allUsers;

    std::vector<Film*>::iterator itF;
    std::vector<Person*>::iterator itP;

    //0==year, 1==length(discard), 2==title, 3==genre, 4==actor(lastName), 5==actor(firstName)
    //6==actress(lastName), 7==actress(firstName), 8,9==director last/first, 
    //10==Poplarity(criticalScore), 11==#awards, 12==picture(discard)
   
    for(int i=0; i<data.size(); i++){
    vector<string> currentRow = data[i];

        //Declare new film to be added
        Film *y = new Film;
        //Add read in string variables to the Film object,
        //During process, create Persons, and verify unique ID's
        int year;
        stringstream(currentRow[0]) >>year;
        y->setYearReleased(year);
        int isThere;
        y->setTitle(currentRow[2]);
        y->setGenre(currentRow[3]);
        int rating;
        stringstream(currentRow[10]) >>rating;
        y->setRating(rating);
        string actorName=currentRow[5];
        actorName.append(" "+currentRow[4]);
        //cout<<"\nActor: "<<actorName;
        Person *act= new Person();
        act->setName(actorName);
        //Redundancy Check: 
        isThere=act->checkVector(allPersons);
        if(isThere==-1){
            //cout<<"\nNot yet contained in vector(Person)";
            allPersons.push_back(act);
        }
        else{
            //cout<<"\nAlready contained in vector(Person)";
            
        }
        //Now check to verify that an Person doesn't already exist wit
        //TODO: Check for redundancy:
        string actressName=currentRow[7];
        actressName.append(" "+currentRow[6]);
        //cout<<"\nActress: "<<actressName;
        Person *actress= new Person();
        actress->setName(actressName);
        //Redundancy Check: For people, should just check names
        isThere=actress->checkVector(allPersons);
        if(isThere==-1){
            //cout<<"\nNot yet contained in vector(Person)";
            allPersons.push_back(actress);
        }
        else{
            //cout<<"\nAlready contained in vector(Person)";
            
        }  
        string directorName=currentRow[9];
        directorName.append(" "+currentRow[8]);
        //cout<<"\nDirector: "<<directorName;
        Person *dir= new Person();
        dir->setName(directorName);
        //Redundancy Check: 
        isThere=dir->checkVector(allPersons);
        if(isThere==-1){
            //cout<<"\nNot yet contained in vector(Person)";
            allPersons.push_back(dir);
        }
        else{
            //cout<<"\nAlready contained in vector(Person)";
            
        }
        //Redundancy Check: Film
        y->setActor(act);
        y->setActress(actress);
        y->setDirector(dir);
        //cout<<"\n"<<y->getTitle();
        isThere=y->checkVector(allFilms);
        if(isThere==-1){
            //cout<<"\nNot yet contained in vector(Film)";
            allFilms.push_back(y);
        }
        else{
            //cout<<"\nAlready contained in vector(Film)";
        }  
       
    /*Example of a user liking a few films, and then getting */      
    }
    cout<<"The number of all films in the database is: "<<allFilms.size();
    u.addLikedFilm(allFilms[4]);
    u.addLikedFilm(allFilms[12]);
    u.addLikedFilm(allFilms[55]);
    vector<Film*> userLikedFilms=u.getLikedFilms();
    int i=0;
    cout<<"The User likes the following films...";
    while(i<userLikedFilms.size()){
        cout<<"\n"<<i;
        cout<<"\n"<<userLikedFilms[i++]->getTitle();
    }
    //Check for genres which have been liked
    i=0;
    cout<<"\nGenres:";
    vector<std::string> genres = u.getLikedGenres();
    while(i<genres.size()){
        cout<<"\n"<<i;
        cout<<"\n"<<genres[i++];
    }
    //Currently, scoreFilm works with 1 Film reference at a time...
    //?It would be better if it took a vector, and gave back the top ten Films...
    cout<<"\nRECOMENDATIONS";
    vector<Film*> rankedFilms;
    rankedFilms=u.sortFilms(allFilms);
    cout<<"Size of new array is: "<<rankedFilms.size();
    int k=0;
    //Output Title, and user's score for a film, top ten films
    while(k<10){
        cout<<"\nTitle: "<<rankedFilms[k]->getTitle()<<"\tScore: "<<u.scoreFilm(rankedFilms[k]);
        k++;
    }
    
    return 0;
}


