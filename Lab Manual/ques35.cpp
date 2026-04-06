/*A data analytics tool flips rows and columns for better visualization. Implement a solution to
store a 3×3 matrix and compute its transpose.*/
#include<iostream>
using namespace std;
class Max{
private:
int arr[3][3],arr1[3][3];
public:
void getdata(){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<" Enter num:";
        cin>>arr[i][j];
    }
  }
}
void checkdata(){
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      arr1[i][j]=arr[j][i];
    }
    cout<<endl;
  }
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }
}
};
int main(){
    Max m;
    m.getdata();
    m.checkdata();
    return 0;
}