// There are two types of header files 
// 1.System header files: It comes with the compiler 
#include<iostream>  
// 2.User defined header files:It is written by the programmer
// #include"this.h"--> This will produce an error if this.h file is not present in tthe current directory

using namespace std;

int main(){
    int a=4,b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmetic operators 
    cout<<"The value of a+b is:"<<a+b<<endl;
    cout<<"The value of a-b is:"<<a-b<<endl;
    cout<<"The value of a*b is:"<<a*b<<endl;
    cout<<"The value of a/b is:"<<a/b<<endl;
    cout<<"The value of a%b is:"<<a%b<<endl;
    cout<<"The value of a++ is:"<<a++<<endl;
    cout<<"The value of a-- is:"<<a--<<endl;
    cout<<"The value of ++a is:"<<++a<<endl;
    cout<<"The value of --a is:"<<--a<<endl;

    // Assignment operators --> Used to assign values to variables
    // int a=3,b=5;
    // char c='c';

    // Comparision operators 
    cout<<"Following are the types of comparison operators in C++"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;

    // Logical operators 
    cout<<"Following are the types of Logical operators in C++"<<endl;
    cout<<"The value of logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of logical not operator (!(a==b)) is: "<<(!(a==b) || (a<b))<<endl;
 
    return 0;
}