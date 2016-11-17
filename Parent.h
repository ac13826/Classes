#include<iostream>
#include<vector>
#include<string.h>

using namespace std;


class Parent{
 public:
  Parent();
  char* getTitle();
  int getYear();
 private:
  int year;
  char title[50];
 
};

