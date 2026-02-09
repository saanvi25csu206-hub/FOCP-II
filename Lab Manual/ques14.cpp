/*Develop a menu-driven calculator program in C++ to perform basic arithmetic operations.
The program should continue executing based on the user's choice and display the result of
 each operation.*/
 #include<iostream>
 using namespace std;
 class Calculator{
    private:
    char op;
    int choice;
    float num1,num2;
    public:
    void checkdata(){
    while(true){
    cout<<"Enter 0 to exit the code and 1 to continue:";
    cin>>choice;
    if(choice==0){
        cout<<"exiting the calculator";
        break;
    }
    else{
    cout<<"chose opaeration :a-addition,b-substraction,c-multiplication,d-division:";
    cin>>op;
    cout<<"Enter num1:";
    cin>>num1;
    cout<<"Enter num2:";
    cin>>num2;
    if(op=='a'||op=='A'){
        cout<<num1+num2<<endl;

    }
    else if(op=='b'||op=='B'){
        cout<<num1-num2<<endl;
    }
    else if(op=='c'||op=='C'){ //statement aise hi likhna hai
        cout<<num1*num2<<endl;
    }

    else if(op=='d'||op=='D'){
        if(num2!=0){
        cout<<num1/num2<<endl;
        }
        else{
            cout<<"division not possible"<<endl;
        }
    }
    else{
        cout<<"cant perform this operation"<<endl;
    }
}
}
}
};
int main(){
    Calculator m;
    m.checkdata();
    return 0;
}
