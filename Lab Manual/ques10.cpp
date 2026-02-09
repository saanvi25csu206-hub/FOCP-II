/* A calendar app calculates whether February has 29 days. 
Implement a solution to check if a year is a
leap year or not.*/
/*A text editor auto-detects whether an input letter is a vowel,
a consonant or a number. Implement a
solution to classify the symbol*/
#include<iostream>
using namespace std;
int main(){
  int year;
  cout<<"year:";
  cin>>year;
if (year%4==0&&year%100!=0){
    cout<<"year is leap";
}
else if (year%400==0){
    cout<<"year is leap";
}
else{
    cout<<"year is not leap";
}
  return 0;
}