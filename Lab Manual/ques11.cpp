/*A wholesale supplier applies 10% discount if the order > 1000 
items. Implement a solution to compute totalexpenses and apply
a discount accordingly.*/
#include<iostream>
using namespace std;
int main(){
  int a;
  float b,c;
  cout<<"number of items:";
  cin>>a;
  cout<<"price of each item:";
  cin>>b;
  c=b*a;
if (a>1000){
    cout<<"total expenses are "<<c-0.1*c;
}
else{
  cout<<"total expenses are "<<c;
}
  return 0;
}