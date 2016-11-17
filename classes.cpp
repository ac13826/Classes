#include<iostream>
#include<string.h>
#include<vector>
#include "Parent.h"

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
    cout << "would you like to continue?" << endl;
    cin >> program;
    if((strcmp(program, "no")) == 0){
      programRun = false;
    }
  }
    
}

void addMediaFile(vector<Parent*>*list){
  Parent* media = new Parent;
  list->push_back(media);
  
  
}

void scanMediaFile(vector<Parent*>*list){
  char searchtitle[50];
  int searchyear;
  char searchinput[10];
  char counter;
  cout << "Would you like to search by title or year?" << endl;
  cin >> searchinput;
  if((strcmp(searchinput, "title"))==0){
    cout << "Title: ";
    cin >> searchtitle;//nothing after this works :(((
    cout << "hello" << endl;
    for(vector<Parent*>::iterator it = list->begin(); it != list->end(); ++it){
      
      if(strcmp(searchtitle, ((*it)->getTitle())) == 0){
	cout << "yes" << endl;
	cout << "Year: " << (*it)->getYear() << endl;
      }
    }

  }
  if((strcmp(searchinput, "year")) == 0){
      cout << "Year: ";
      cin >> searchyear;
  }

}
