#include<iostream>
#include<string.h>
#include<vector>
#include "Parent.h"
#include "movies.h"
#include "music.h"
using namespace std;

void addMediaFile(vector<Parent*>*list);
void scanMediaFile(vector<Parent*>*list);

int main(){
  char program[3];
  bool programRun = true;
  vector<Parent*>*list = new vector<Parent*>();
  char decision[10];
  while(programRun == true){
    cout << "Type ADD if you'd like to add a mediafile, type SEARCH if you'd like to search for one." << endl;
    cin >> decision;
    cin.ignore();
  
    if((strcmp(decision, "ADD"))==0){
      addMediaFile(list);
    }
    else if((strcmp(decision, "SEARCH"))==0){
      scanMediaFile(list);
    }
    else{
      return 0;
    }

  }
    
}

void addMediaFile(vector<Parent*>*list){
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
  
  
}

void scanMediaFile(vector<Parent*>*list){
  char searchtitle[50];
  char searchinput[10];
  char counter;
  cout << "Give the title or the year" << endl;
  cin >> searchtitle;
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
      }
    }

 
 

}
