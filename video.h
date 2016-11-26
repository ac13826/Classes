#include<iostream>
#include<vector>
#include<string.h>


using namespace std;

class movies: public Parent{
 public:
  movies();
  char* getDirector();
  int getDuration();
  char* getRating();
 private:
  char director[50]
  int duration;
  char rating[10];
}
