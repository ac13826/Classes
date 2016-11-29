#include<iostream>
#include<string.h>
#include "videogames.h"

using namespace std;

videogames::videogames(){
  form = 3;
  cout << "Publisher: ";
  cin.get(publisher, 50);
  cin.ignore();
  cout << "Rating: ";
  cin.get(rating, 10);
  cin.ignore();
}


char* videogames::getPublisher(){
  return publisher;
}

char* videogames::getRating(){
  return rating;
}

void videogames::print(){
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Rated: " << rating << endl;
}
