/*A data analytics tool finds the maximum sales figure from multiple entries.
Implement a solution to accept ‘n’ numbers and display the largest.*/
#include<iostream>
using namespace std;
class Max{
    private:
    int n;
    float sum,arr[];
    public:
    void getdata(){
        cout<<"number of entries:";
        cin>>n;
    }
    void checkdata(){
        for(int i=0;i<n;i++){
            cout<<"Enter term"<<endl;
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>sum){
                sum=arr[i];
            }
        }
        cout<<"maximum number is:"<<sum;
    }
};
int main(){
    Max c;
    c.getdata();
    c.checkdata();
    return 0;
}

