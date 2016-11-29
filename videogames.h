#include<iostream>
#include<string.h>
#include "Parent.h"

using namespace std;


class videogames : public Parent{
 public:
  videogames();
  ~videogames();
  void print();
  char* getPublisher();
  char* getRating();
 protected:
  char publisher[50];
  char rating[10];
};
