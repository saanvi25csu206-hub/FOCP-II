/*A mathematics tool computes the exact roots of a quadratic\
equation for teaching purposes. Implement a
solution to calculate the roots of a quadratic equation.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int a,b,c,d;
  cout<<"coefficient of x square:";
  cin>>a;
  cout<<"coefficent of x:";
  cin>>b;
  cout<<"constant:";
  cin>>c;
  d=b*b-4*a*c;
  cout<<(-b+sqrt(d))/2*a<<endl;
  cout<<(-b-sqrt(d))/2*a;
  return 0;
  
}