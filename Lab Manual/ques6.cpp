/*An HR system needs to calculate employees’ net salaries, 
including a fixed 12% bonus for each worker.
Implement a solution to accept the number of employees and 
their basic salary. Compute bonus, net salary, and
display results.*/
#include<iostream>
using namespace std;
int main(){
  int a;
  float b,c,d;
  cout<<"number of employees:";
  cin>>a;
  cout<<"salary of employees:";
  cin>>b;
  c=0.12*b;
  d=0.12*b+b;
  cout<<"bonus is"<<c<<"net salary is"<<d;
  return 0;
  
}