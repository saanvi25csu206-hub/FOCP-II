/*A data processing system classifies even and odd inputs separately. Implement a solution to
store 5 elements in an array, compute sum of all even and sum of all odd numbers.
*/
#include<iostream>
using namespace std;
class Evenodd{
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
    if(i%2==0){
        max=max+arr[i];
    }
    else{
        count=count+arr[i];
    }
   
  }
  cout<<"sum of even mumbers is "<<max<<endl;
  cout<<"sum of odd mumbers is "<<count;
}
};
int main(){
    Evenodd m;
    m.getdata();
    m.checkdata();
    return 0;
}
