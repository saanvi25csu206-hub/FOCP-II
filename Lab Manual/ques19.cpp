/*A network security system generates prime numbers in a range for encryption key pools. 
Implement a solution to find all prime numbers within a given range.*/
#include<iostream>
using namespace std;
class Prime{
    private:
    int a,b,f;
    public:
    void getdata(){
        cout<<"enter starting number:";
        cin>>a;
        cout<<"enter ending number:";
        cin>>b;
    }
    void checkdata(){
        for(int j=a;j<b;j++){
            if (j<2){
                continue;
            }
        f=0;
        for(int i=2;i<j;i++){
            if(j%i==0){
                f=1;
                break;
            }
        }
        if(f==0){
                 cout<<j<<endl;
            
            
     
    }
}
}
};
int main(){
    Prime c;
    c.getdata();
    c.checkdata();
    return 0;
}