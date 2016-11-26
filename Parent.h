#ifndef PARENTH_DEFINED
#define PARENTH_DEFINED
#include<iostream>
#include<vector>
#include<string.h>

using namespace std;


class Parent{
 public:
  Parent();
  char* getTitle();
  char* getYear();
  int getForm();
 protected:
  char year[5];
  char title[50];
  int form;
};

#endif
