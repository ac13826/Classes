#include<iostream>
#include<string.h>
#include "movies.h"

using namespace std;

movies::movies(){
  form = 1;
  cout << "Director: ";
  cin.get(director, 50);
  cin.ignore();
  cout << "Parental Rating: ";
  cin.get(rating, 10);
  cout << "Minutes: ";
  cin >> duration;
  cin.ignore();

  

}

char* movies::getDirector(){
  return director;
}

int movies::getDuration(){
  return duration;
}

char* movies::getRating(){
  return rating;
}
void movies::print(){
  cout << "Title: " << title << endl;
  cout << "Created: " << year << endl;
  cout << "Directed by " << director << endl;
  cout << "Rated: " << rating << endl;
  cout << "Duration: " << duration << endl;

}

