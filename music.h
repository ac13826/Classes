#include<iostream>
#include<string.h>
#include "Parent.h"


class music : public Parent{
 public:
  music();
  void print();
  char* getArtist();
  char* getPublisher();
  char* getDuration();
 protected:
  char artist[40];
  char publisher[40];
  char duration[10];
  
};
