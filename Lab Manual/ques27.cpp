/*A supermarket software maintains item price lists. Implement a solution to store the prices 
of 10 items in an array and display the maximum price*/
#include<iostream>
using namespace std;
class Marks{
private:
int arr[10],max=0;
public:
void getdata(){
  for(int i=0;i<10;i++){
    cout<<"enter price:";
    cin>>arr[i];
  }
}
void checkdata(){
 for(int i=0;i<10;i++){
    cout<<arr[i]<<endl;
    if(arr[i]>max){//comapare arr[i] not just i
        max=arr[i];
    }
  }
  cout<<max;

}
};
int main(){
    Marks m;
    m.getdata();
    m.checkdata();
    return 0;
}
