/* A manufacturing QC system checks defect codes divisible by both 3 and 5.
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5*/
#include<iostream>
using namespace std;
class Divisible{
private:
int arr[5],max=0,count=0;
public:
void getdata(){
  for(int i=0;i<5;i++){
    cout<<"enter num:";
    cin>>arr[i];
  }
}
void checkdata(){
 for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
    if(arr[i]%3==0&&arr[i]%5==0){
        max=max+1;
    }   
  }
  cout<<"numbers divisible by 3 and 5 are "<<max<<endl;
}
};
int main(){
    Divisible m;
    m.getdata();
    m.checkdata();
    return 0;
}