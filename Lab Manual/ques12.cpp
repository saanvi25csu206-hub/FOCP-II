/*A civil engineer classifies a triangle design as equilateral,
 isosceles, or scalene. Implement a solution to
check the triangle type based on its sides.*/
#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"side 1:";
  cin>>a;
  cout<<"side 2:";
  cin>>b;
  cout<<"side 3:";
  cin>>c;
  if(a==b&&a==c){
    cout<<"eqilateralr";
  }
  else if (a==b||a==c||b==c){
    cout<<"isosceles";
  }
  else{
    cout<<"scalene";
  }
  
  return 0;
}