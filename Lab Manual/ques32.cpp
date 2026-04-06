/*A stock market app tracks first and second highest stock values.
Implement a solution to find the largest and second largest number in an array of size 5.*/
#include<iostream>
using namespace std;
class Max{
private:
int arr[5],max,count;
public:
void getdata(){
  for(int i=0;i<5;i++){
    cout<<"enter num:";
    cin>>arr[i];
  }
}
void checkdata(){
max=arr[0];
count=arr[0];//better as can take negative numbers too
 for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
    }    
  }
   for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
    if(arr[i]>count && arr[i]<max){
            count=arr[i];
        }
     
  }
  cout<<"Largest num is "<<max<<endl;
  cout<<count;
}
};
int main(){
    Max m;
    m.getdata();
    m.checkdata();
    return 0;
}