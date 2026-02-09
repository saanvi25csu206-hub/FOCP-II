/*A game compares three players' scores to find who is ahead.
Implement a solution to accept three scores and identify the 
winner.*/
#include<iostream>
using namespace std;
int main(){
  int a;
  float b,c,d;
  cout<<"score of first player:";
  cin>>a;
  cout<<"score of second player:";
  cin>>b;
  cout<<"score of third player:";
  cin>>c;
  if(a>b&&a>c){
    cout<<"max is first player";
  }
  else if (b>a && b>c){
    cout<<"max is second player";
  }
  else{
    cout<<"max is third player";
  }
  
  return 0;
}