#include<iostream>
#include<string.h>
#include<vector>
#include "Parent.h"

using namespace std;

Parent::Parent(){
  cout << "What is the title?" << endl;
  cin.ignore();
  cin.get(title, 50);
  cin.ignore();
  cout << "What year?" << endl;
  
  cin.get(year, 5);
  cin.ignore();
}


char* Parent::getTitle(){  
  return title;
}

char* Parent::getYear(){
  return year;
}

int Parent::getForm(){
  return form;
}
