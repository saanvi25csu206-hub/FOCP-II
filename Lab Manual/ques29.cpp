/*A weather monitoring app records 30-day temperature logs. Implement a solution to store daily
temperatures in an array and display the minimum temperature for the month.
*/
#include<iostream>
using namespace std;
class Temp{
    private:
    float arr[5],min;
    public :
    void getdata(){
    for(int i=0;i<5;i++){
        cout<<"Enter day "<<i+1<<" temp:";
        cin>>arr[i];
    }
  }
  void checkdata(){//good question it will also take negative values(see ques 32)
    min=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<arr[0]){
            min=arr[i];
        }
    }
    cout<< "min temp is :"<<min;
  }
 };
 int main(){
    Temp m;
    m.getdata();
    m.checkdata();
    return 0;
 }