/*A cybersecurity tool verifies prime numbers used in encryption keys. Implement a solution to 
accept a number and check whether it is prime.*/
#include<iostream>
using namespace std;
class Prime{
    private:
    int n,f=0;
    public:
    void getdata(){
        cout<<"Enter number:";
        cin>>n;
    }
    void checkdata(){
        for(int i=2;i<n;i++){
            if(n%i==0){
                f=1;
                break;
            }
    }
     if (f == 0)
            cout << "number is prime";
        else
            cout << "number is composite";

}
};
int main(){
    Prime c;
    c.getdata();
    c.checkdata();
    return 0;
}