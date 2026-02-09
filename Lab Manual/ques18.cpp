/*A String-matching tool validates if IDs are palindromes. Implement
a solution to check whether a given ID is a palindrome*/
#include<iostream>
using namespace std;
class Palindrome{
    private:
    int n,lastdig,revnum=0,original;
    public:
    void getdata(){
        cout<<"Enter number:";
        cin>>n;
    }
    void checkdata(){
    original=n;
    while(n!=0){//123
        lastdig=n%10;// 3 2 1
        n=n/10;//12 1 0
        revnum=revnum*10+lastdig;//321
       }
    if (original==revnum){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
}
};
int main(){
    Palindrome c;
    c.getdata();
    c.checkdata();
    return 0;
}