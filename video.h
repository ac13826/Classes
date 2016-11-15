#include<iostream>
#include<vector>
#include<string.h>


struct videos{
  char filmtitle[20];
  char director[30];
  char year[4];
  char duration[6];
  double rating;

};
void videocheck(vector<videos*>*videolist);

class video{
 vector<videos*>*videolist =
 public:
  void videocheck(vector<video*>*list){
    video* i = new video;
    cout << "Film title: ";
    cin >> filmtitle;
    cout << "Director: ";
    cin >> director;
    cout << "Year: ";
    cin >> year;
    cout << "Duration: ";
    cin >> duration;
    cout << "Rating: ";
    cin >> rating;


  }








};
