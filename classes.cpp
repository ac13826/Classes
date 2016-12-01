//Austin Chang, 11/29 (This better turnin :()
//Media Database: Add, Search, or Delete any media files descriptions stored in here
#include<iostream>
#include<string.h>
#include<vector>
#include "Parent.h"//additional headers
#include "movies.h"
#include "music.h"
#include "videogames.h"
using namespace std;

void addMediaFile(vector<Parent*>*list);
void scanMediaFile(vector<Parent*>*list);
void deleteMediaFile(vector<Parent*>*list);

int main(){
  char program[3];
  bool programRun = true;
  vector<Parent*>*list = new vector<Parent*>();
  char decision[10];
  while(programRun == true){
    cout << "Type ADD if you'd like to add a mediafile, type SEARCH if you'd like to find a mediafile, type DELETE to remove a mediafile" << endl;
    cin >> decision;
    cin.ignore();
  
    if((strcmp(decision, "ADD"))==0){
      addMediaFile(list);
    }
    else if((strcmp(decision, "SEARCH"))==0){
      scanMediaFile(list);
    }
    else if ((strcmp(decision, "DELETE"))==0){
      deleteMediaFile(list);
    }
    else{
      return 0;
    }

  }
    
}

void addMediaFile(vector<Parent*>*list){//adding the file
  char input[15];
  cout << "What is the media type (music, movie, or game)?" << endl;
  cin.get(input, 50);
  if((strcmp(input, "movie")) ==0){
    movies* m = new movies();
    list->push_back(m);
  }
  else if((strcmp(input, "music")) ==0){
    music* m = new music();
    list->push_back(m);
  }
  else if ((strcmp(input, "game")) ==0){
    videogames* m = new videogames();
    list->push_back(m);
  }
  
  
}

void scanMediaFile(vector<Parent*>*list){//searching for the file
  char searchtitle[50];
  char searchinput[10];
  char counter;
  cout << "Give the title or the year" << endl;
  cin.get(searchtitle, 50);
    for(vector<Parent*>::iterator it = list->begin(); it != list->end(); ++it){
      if((strcmp(searchtitle, ((*it)->getTitle())) == 0) || (strcmp(searchtitle, ((*it)->getYear())) == 0)){
	int form = (*it)->getForm();
	cout << (*it)->getForm() << endl;
	if(form == 1){
	  movies* m = (movies*) (*it);
	  m->print();
	}
	if(form == 2){
	  cout << "haha" << endl;
	  music* m = (music*) (*it);
	  m->print();
	}
	if(form == 3){
	  videogames* m = (videogames*) (*it);
	  m->print();
	}
      }
    }

}
void deleteMediaFile(vector<Parent*>*list){//deleting files
  char input[50];
  char deleteTitle[50];
  char deleteYear[5];
  cout << "What would you like to delete?" << endl;
  cout << "Title: ";
  cin.get(deleteTitle, 50);
  cin.ignore();
  cout << "Year: ";
  cin.get(deleteYear, 5);
  cin.ignore();
  for(vector<Parent*>::iterator it = list->begin(); it != list->end(); ++it){
    if((strcmp(deleteTitle, ((*it)->getTitle())) == 0) && (strcmp(deleteYear, ((*it)->getYear())) == 0)){
      int form = (*it)->getForm();
      cout << "HERLLO" << endl;
      list->erase(it);break;
    }
  } 
}

