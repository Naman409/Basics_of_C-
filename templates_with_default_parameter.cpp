#include<iostream>

using namespace std;

template < class T1 = int , class T2 = char , class T3 = float>
class Nayan{
    public:
        T1 a;
        T2 b;
        T3 c;
        Nayan(T1 x,T2 y,T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};

int main(){
    Nayan<> obj(5,'K',3.14);
    obj.display();

    return 0;
}