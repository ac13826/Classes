#include<iostream>
#include<vector>
#include<string.h>

using namespace std;


class Parent{
 public:
  char* getTitle();
  int getYear();
 private:
  int year;
  char* title;
 
};

