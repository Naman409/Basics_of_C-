#include<iostream>

using namespace std;

int c=44;

int main(){
    //******************* Build in Data types********************* 
    // int a,b,c;
    //   cout<<"Enter the value of a: "<<endl;  
    //   cin>>a;

    //   cout<<"Enter the value of b: "<<endl; 
    //   cin>>b;

    //   c=a+b;
      
    //   cout<<"The sum is "<< c <<endl;
    //   cout<<"The globle c is "<<::c; /*c ke pehle jo :: hai ... isko kehte hai scope scope resolution operator jo globle ko print krega*/

      //******************* Float , double and long double literals********************* 
    // float d=34.4f;
    // long double e=34.4l;
    
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

     //******************* Reference variables ********************* 
    //  float x = 50;
    //  float & y=x;
    //  cout<<x<<endl;
    //  cout<<y<<endl;

     //******************* Typecasting********************* 

     int a=37;
     float b=28.93;
     cout<<"The value of a is "<<(float)a<<endl;
     cout<<"The value of a is "<<float(a)<<endl;

     cout<<"The value of b is "<<(int)b<<endl;
     cout<<"The value of b is "<<int(b)<<endl;

     cout<<"Sum of a and b is"<<a+b<<endl;
     cout<<"Sum of a and (int) b is"<<a+(int)b<<endl;
     cout<<"Sum of a and int (b) is"<<a+int(b)<<endl;
    return 0;
}