
#include <iostream>
#include <cstdlib>
#include <string>
#include "Film.h"
#include "Person.h"
#include "User.h"
#include "fstream"
#include <sstream>

using namespace std;
/*
 * 
 */   
vector <vector <string> > data;
ifstream infile( "films" );

main() {

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
  //Test By retrieving first row
  //for( int row = 0; row < 5; row++)
  //  for(int column = 0; column < 5;column++)
  
  /*Karl-- Tuple at a time, this for loop can create and populate Film objects
  //Casting the strings to other variables seems a little tricky, especially for genre...
  //Would switching them to Strings make sense?
  //Also need fail-safes to be called from this loop to verify that the films and people
  persons being created don't already exist..*/
  //?while:data[x]!=NULL;
      vector<string> currentRow = data[0];
      for(int x = 0; x < currentRow.size();x++){
          Film *y= new Film();
          //y.setYearReleased((int)currentRow[0]);
          //Not sure why the identifier for setTitle can't be resolved.
          //getting this method to work first (as it takes a string)
          //before moving on the the others
          y->setTitle(currentRow[2]);
          //y.setGenre((type)currentRow[3]);
          string actorName=currentRow[5];
          actorName.append(" ");
          actorName.append(currentRow[4]);
          cout<<"\nActor: "<<actorName;
          //Now check to verify that an Person doesn't already exist wit
          //TODO: Check for redundcancy:
          string actressName=currentRow[7];
          actressName.append(" ");
          actressName.append(currentRow[6]);
          cout<<"\nActress: "<<actressName;
          string directorName=currentRow[9];
          directorName.append(" ");
          directorName.append(currentRow[8]);
          cout<<"\nDirector: "<<directorName;
          cout<<"\n"<<currentRow.size()<<"\n";
            cout << currentRow[x] << " ";
            
        }

      //-- OK, so the file reads in one line just fine. First step is to combine the strings [5] +[4], [7]+[6], and [9]+[10]
      // these will produce 
      //so 0==year, 1==length(discard), 2==title, 3==genre, 4==actor(lastName), 5==actor(firstName)
      //6==actress(lastName), 7==actress(firstName), 8,9==director last/first, 
      //10==Poplarity(criticalScore), 11==#awards, 12==picture(discard)
      //--Karl
}
