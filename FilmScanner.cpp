/* 
 * File:   main.cpp
 * Author: Karl
 *
 * Created on November 8, 2014, 2:35 PM
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include "Film.h"
#include "Person.h"
#include "User.h"
#include "fstream"
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
/*
    string j("John");
    string pw("Password");
    User u;
    u.setUserName(j);
    u.setPassword(pw);
    u.getUserName();
    u.getPassword();
    
  */  
    
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
    
  //Test By retrieving first row
  //for( int row = 0; row < 5; row++)
  //  for(int column = 0; column < 5;column++)
  
    std::vector<Film*>::iterator itF;
    std::vector<Person*>::iterator itP;
  /*Karl-- Tuple at a time, this for loop can create and populate Film objects
  //Casting the strings to other variables seems a little tricky, especially for genre...
  //Would switching them to Strings make sense?
  //Also need fail-safes to be called from this loop to verify that the films and people
  persons being created don't already exist..*/
  //?while:data[x]!=NULL;
    for(int i=0; i<data[i].size(); i++){
    vector<string> currentRow = data[i];

        //Declare new film to be added
        Film *y= new Film();
        Film z();
        //Add read in string variables to the Film object,
        //During process, create Persons, and verify unique ID's
        y->setTitle(currentRow[2]);
        cout<<"\nExtracted and Assigned Title:";
        y->getTitle();
                        
        y->setGenre(currentRow[3]);
        string actorName=currentRow[5];
        actorName.append(" "+currentRow[4]);
        //cout<<"\nActor: "<<actorName;
        Person *act= new Person();
        act->setName(actorName);
        //Redundancy Check: 
        itP = std::find(allPersons.begin(), allPersons.end(), act);
        if(itP!=allPersons.end()){
            ///cout<<"Person already contained in vector";
            continue;
        }
        else{
            //cout<<"Person not contained in vector";
            allPersons.push_back(act);
        }            
        //Now check to verify that an Person doesn't already exist wit
        //TODO: Check for redundancy:
        string actressName=currentRow[7];
        actressName.append(" "+currentRow[6]);
        //cout<<"\nActress: "<<actressName;
        Person *actress= new Person();
        actress->setName(actressName);
        //Redundancy Check: For people, should just check names
        itP = std::find(allPersons.begin(), allPersons.end(), actress);
        if(itP!=allPersons.end()){
            //cout<<"Person already contained in vector";
            continue;
        }
        else{
            //cout<<"Person not contained in vector";
            allPersons.push_back(actress);
        }  
        string directorName=currentRow[9];
        directorName.append(" "+currentRow[8]);
        //cout<<"\nDirector: "<<directorName;
        Person *dir= new Person();
        dir->setName(actorName);
        //Redundancy Check: 
        itP = std::find(allPersons.begin(), allPersons.end(), dir);
        if(itP!=allPersons.end()){
            cout<<"Film already contained in vector";
            continue;
        }
        else{
            cout<<"Film not contained in vector";
            allPersons.push_back(dir);
        }  
        //Redundancy Check: Film
        y->setActor(act);
        y->setActress(actress);
        y->setDirector(dir);
        itF = std::find(allFilms.begin(), allFilms.end(), y);
        if(itF!=allFilms.end()){
            cout<<"\nFilm already contained in vector";
            continue;
        }
        else{
            cout<<"\nFilm not contained in vector";
            allFilms.push_back(y);
        }
          
          
        //y.setYearReleased((int)currentRow[0]);

        //These assignments can be out of this loop.
        //In fact, this loop should be modified to instead of iterating over
        //the second factor in our 2D array ([][x]), it should instead iterate
        //over the first factor.
         
        //
          
    }

    //-- OK, so the file reads in one line just fine. First step is to combine the strings [5] +[4], [7]+[6], and [9]+[10]
    // these will produce 
    //so 0==year, 1==length(discard), 2==title, 3==genre, 4==actor(lastName), 5==actor(firstName)
    //6==actress(lastName), 7==actress(firstName), 8,9==director last/first, 
    //10==Poplarity(criticalScore), 11==#awards, 12==picture(discard)
    //--Karl
}
/*

    Person p;
    p.setName("Tim Robbins");
    p.getName();
    p.setActiveSince(1972);
    p.getActiveSince();
    Film f;
    string title="This string atgain";
    f.setTitle(title);
    f.getTitle();
    
    f.setActor(p);/*
    f.getActor().getName();/*
    f.setTitle("Eric the Viking");
    f.setAwards(1);
    f.setMPAA(R);
    f.setGenre(comedy);
    f.setRating(7);
    f.getActor();
    
    return 0;
}*/

