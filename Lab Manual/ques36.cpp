/*A machine learning model multiplies matrices for neural network layers. Implement a solution
to multiply two matrices of order m×n and p×q (if valid).*/
#include<iostream>
using namespace std;
class Multiply{
private:
int m,n,p,q;
int arr[10][10],arr1[10][10],arr2[10][10];
public:
void getdata(){
cout<<"enter m:";
cin>>m;
cout<<"enter n:";
cin>>n;
cout<<"enter p:";
cin>>p;
cout<<"enter q:";
cin>>q;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<" Enter num:";
        cin>>arr[i][j];
    }
  }
  cout<<endl;
   for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        cout<<" Enter num:";
        cin>>arr1[i][j];
    }
  }
}
void checkdata(){
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
   for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      arr2[i][j]=0;
      for(int k=0;k<n;k++)
      {
        arr2[i][j]+=arr[i][k]*arr1[k][j];
      }
    }
    cout<<endl;
  }
   for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){      
        cout<<arr2[i][j]<<" ";
     }
    cout<<endl;
  }
}
};
int main(){
    Multiply m;
    m.getdata();
    m.checkdata();
    return 0;
}
