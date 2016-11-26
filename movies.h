#include<iostream>
#include<string.h>
#include "Parent.h"

using namespace std;

class movies : public Parent{//tells movies that it's a child of Parent
 public:
  movies();
  void print();
  char* getDirector();
  int getDuration();
  char* getRating();
 protected:
  char director[50];
  int duration;
  char rating[10];
};
