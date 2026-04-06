/*The school report card system stores subject marks for each student.
Implement a solution to accept marks in 5 subjects, compute the total and percentage, 
and display the result.*/
#include<iostream>
using namespace std;
class Marks{
private:
int s1,s2,s3,s4,s5,t,p;
public:
void getdata(){
    cout<<"enter marks:";
    cin>>s1;
    cout<<"enter marks:";
    cin>>s2;
    cout<<"enter marks:";
    cin>>s3;
    cout<<"enter marks:";
    cin>>s4;
    cout<<"enter marks:";
    cin>>s5;
}
void checkdata(){
  t=s1+s2+s3+s4+s5;
  cout<<t<<endl;
  p=t/5;
  cout<<p;
}
};
int main(){
    Marks m;
       m.getdata();
    m.checkdata();
    return 0;
}

