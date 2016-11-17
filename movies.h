#include<iostream>
#include<vector>
#include<string.h>


using namespace std;

class movies{
 public:
  movies();
  char* getDirector();
  int getDuration();
  char* getRating();
 private:
  char director;
  int duration;
  char getRating;
