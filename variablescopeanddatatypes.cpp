#include<iostream>

using namespace std;

int glo=6;
void sum(){
    int a;
    cout<< glo;
}

int main(){
    int glo=9;
    glo=20;
    // int a = 4;
    // int b = 5;
    int a=4 , b=5;
    float pi=3.14;
    char c='u';
    double d=2.32565;
    bool t=true;
    sum();
    cout<<glo<< t;
    // cout<<"This is tutorial 4.\n Here the value of a is "<< a <<".\n The value of b is "<< b ;
    // cout<<".\n The value of pi is "<<pi;
    // cout<<".\n The value of c is "<<c;
    // cout<<".\n The value of d is "<<d;
    return 0;
}