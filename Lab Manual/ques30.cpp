/*A payroll system maintains employee salary records. Implement a solution to accept salary of
10 employees in an array, compute total salary and average salary, then display the result.
*/
#include<iostream>
using namespace std;
class Salary{
    private:
    float arr[10],t,avg;
    public :
    void getdata(){
    for(int i=0;i<10;i++){
        cout<<"Enter salary of employee"<<i+1<<":";
        cin>>arr[i];
    }
  }
  void checkdata(){
    for(int i=0;i<10;i++){
        cout<<"salary of "<<i+1<<" is"<<arr[i]<<endl;
        t=t+arr[i];
    }
    cout<<"total is "<<t<<endl;
    cout<<"avg is "<<t/10<<endl;

  }
 };
 int main(){
    Salary m;
    m.getdata();
    m.checkdata();
    return 0;
 }