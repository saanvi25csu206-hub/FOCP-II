/*A typing practice app displays the alphabets in pyramid form. Implement a solution to display:
A
AB
ABC
ABCD
ABCDE */
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<6;i++){
     for(int k=0;k<i;k++){
        cout<<char('A'+k);
    }
      cout<<endl;
    }
}
