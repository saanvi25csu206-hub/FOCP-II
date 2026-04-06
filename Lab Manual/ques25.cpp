/*. A security system generates list of prime keys within given range. Implement a solution
 to display all prime numbers between two limits.
*/

#include<iostream>
using namespace std;
int main(){
    int a,b;
  cout<<"Enter starting point:";
  cin>>a;
  cout<<"Enter end point:";
  cin>>b;
  for(int i=a+1;i<b;i++){
    int f=0;
    for(int j=2;j<i;j++){
        if(i%j==0){
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<i<<endl;
    }

  }
return 0;
}