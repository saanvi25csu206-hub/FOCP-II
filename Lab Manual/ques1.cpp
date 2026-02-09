/*A teacher wants to calculate the average marks of three
students to determine the class performance.Implement a solution
to accept three numbers and compute their average.*/
#include<iostream>
using namespace std;
int main()
{
  int std1,std2,std3,total,sum;
  cout<<"marks of student 1:";
  cin>>std1;
  cout<<"marks of student 2:";
  cin>>std2;
  cout<<"marks of student  3:";
  cin>>std3;
  sum=std1+std2+std3;
  cout<<"avg marks are "<<float(sum/3.0);
}