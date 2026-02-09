/*A text editor auto-detects whether an input letter is a vowel,
a consonant or a number. Implement a
solution to classify the symbol*/
#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"score of first player:";
  cin>>a;
if (a%5==0 && a%3==0){
    cout<<"Fuzz and Buzz";
  }
else if(a%3==0){
    cout<<"Buzz";
  }
else if (a%5==0){
    cout<<"Fuzz";
  }
else{
    cout<<"none";
  }
  
  return 0;
}