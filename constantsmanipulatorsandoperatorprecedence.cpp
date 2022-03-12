#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34;
    // cout<<"The value of a was "<<a<<endl;
    // a = 29;
    // cout<<"The value of a is "<<a<<endl;

    // Constants in C++
    // Isme error aa jayegi kyuki agar const likh diya toh fir a ki value fix ho jayegi aur use change nahi kar payenge
    // const int a = 34;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 29;
    // cout<<"The value of a is "<<a<<endl;

    // Manipulators in C++

    // int a=20,b=300,c=4000;

    // cout<<"The value of a without setw is "<<a<<endl;
    // cout<<"The value of b without setw is "<<b<<endl;
    // cout<<"The value of c without setw is "<<c<<endl;

    // cout<<"The value of a is "<<setw(4)<<a<<endl;
    // cout<<"The value of b is "<<setw(4)<<b<<endl;
    // cout<<"The value of c is "<<setw(4)<<c<<endl;

    // Operator Precedence
    int a=3,b=4;
    // int c=(a*5)+b;
    int c = ((((a*5)+b)-40)+29);
    cout<<c;


    return 0;

}