#include<iostream>
#include<string.h>
#include<vector>
#include "Parent.h"

using namespace std;

Parent::Parent(){
  cout << "What is the title" << endl;
  cin.get(title, 50);
  cout << "Year:";
  cin >> year;
  cout << year << endl;


}


char* Parent::getTitle(){  
  return title;
}

int Parent::getYear(){
  return year;
}
