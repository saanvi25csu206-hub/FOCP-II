/* A shopkeeper wants to calculate the total bill amount after 
applying a 20% discount on the purchase.Implement a solution to
accept item no., quantity, and unit price. Compute the amount
and apply 20% discount.
*/
#include<iostream>
using namespace std;
int main(){
  int n,q,p;
  float x;
  cout<<"Enter item number:";
  cin>>n;
  cout<<"Enter quantity number:";
  cin>>q;
  cout<<"Enter unit price:";
  cin>>p;
  cout<<"item number"<<n<<endl<<"quantity"<<q<<endl<<
  "unit price"<<p<<endl;
  x=q*p-0.2*q*p;
  cout<<"final amout is"<<x;
  return 0;
  
}