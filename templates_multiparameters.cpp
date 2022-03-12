#include<iostream>

using namespace std;

template<class T1,class T2>

class mericlass{
    public:
        T1 data1;
        T2 data2;
        mericlass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<this->data1<<" "<<this->data2<<endl;
        }
};

int main(){

    mericlass <float,char> obj(2.229,'C');
    obj.display();

    return 0;
}