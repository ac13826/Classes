#include<iostream>
#include<string.h>
#include "music.h"

using namespace std;

music::music(){
  form = 2;
  cout << "Artist: ";
  cin.get(artist, 40);
  cin.ignore();
  cout << "Publisher: ";
  cin.get(publisher, 40);
  cin.ignore();
  cout<< "Duration: ";
  cin.get(duration, 10);
  cin.ignore();
}

char* music::getArtist(){
  return artist;
}

char* music::getPublisher(){
  return publisher;
}

char* music::getDuration(){
  return duration;
}

void music::print(){
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Artist: " << artist << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Duration: " << duration << endl;

}
