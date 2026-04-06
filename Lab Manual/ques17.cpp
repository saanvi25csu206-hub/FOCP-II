/*A learning application analyzes numbers for mathematical properties.
Design a solution to check whether a given number is a Perfect number or an Armstrong number*/
#include<iostream>
using namespace std;
#include<math.h>
int main() {
   int m,n,num,a=0,sum=0,original,k,l,p,sum1=0;
   cout<<"Enter number:";
   cin>>n;
   original=n;
   k=n;
   l=n;
   p=n;
while(k!=0){//number of digits nikil isse
    k=k/10;
    a=a+1;
}
while(l!=0){
    m=l%10; 
    sum+=pow(m,a);
    l=l/10;
}
for(int i=1;i<p;i++){
    if(p%i==0){
        sum1=sum1+i;
    }
}
if(sum==original){
cout<<"armstrong";
}
else if(sum1==original){
    cout<<"Perfect number";
}
else{
    cout<<"none";
}
return 0;
}