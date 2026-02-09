/*A monitoring system generates a sequence of numeric event IDs 
from 1 to N.
To make logs easier to analyse, the system applies tags to 
certain events based on predefined rules:
• Events whose ID is divisible by 3 are tagged as “Buzz”
• Events whose ID is divisible by 5 are tagged as “Fuzz”
• Events divisible by both 3 and 5 receive both tags
*/
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