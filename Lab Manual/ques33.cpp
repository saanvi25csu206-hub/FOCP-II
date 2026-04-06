/* A grading system stores marks of multiple students in arrays. Implement a solution to accept
marks in 5 subjects for 3 students, then display:
• marks in 2nd subject of 1st student, and
• marks in 5th subject of 3rd student*/
#include<iostream>
using namespace std;
class Max{
private:
int arr[3][5],max,count;
public:
void getdata(){
  for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        cout<<" Enter Student "<<i+1<<" marks for sub" <<j+1<<":";
        cin>>arr[i][j];
    }
    
  }
}
void checkdata(){
     for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        cout<<"Student "<<i+1<<" marks for sub" <<j+1<<"is "<<arr[i][j]<<endl;
    }
}
cout<<arr[0][1]<<endl;
cout<<arr[2][4];//dhyan rakkhna starts with 0 not 1 to sub 3 matlab array mein 2

}
};
int main(){
    Max m;
    m.getdata();
    m.checkdata();
    return 0;
}