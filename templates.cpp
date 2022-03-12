#include<iostream>

using namespace std;

template <class T>

class vector{
    public:
    T * arr;
    int size;
        vector(int n){
            size=n;
            arr=new T[size];
        }
    T dot_product(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
        
    }
};

int main(){
    vector <float> v1(3);
    v1.arr[0]=1.2;
    v1.arr[1]=2.1;
    v1.arr[2]=3.0;

    vector <float> v2(3);
    v2.arr[0]=3.3;
    v2.arr[1]=2.2;
    v2.arr[2]=1.1;

    float a = v1.dot_product(v2);
    cout<<a<<endl;

    return 0;
}