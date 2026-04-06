/*A registration system rejects usernames that contain spaces or special characters. Write a C++
program to validate whether a given string can be accepted as a username*/
#include<iostream>
using namespace std;
int main(){
    string un;
    int flag=0;
    cout<<"Enter user name:";
    cin>>un;
    for(int i=0;i<un.length();i++){
        char ch=un[i];
       if(!( (ch>='a' && ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&&ch<='9'))){
                  flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"invalid";
    }
    else{
        cout<<"valid";
    }
return 0;
}
