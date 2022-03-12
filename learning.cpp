#include <iostream>
using namespace std;

class calc
{

public:

    int a, b, c;
    // calc(int aa, int bb)
    // {

    //     a = aa;
    //     b = bb;
    // }

    void func_add()
    {
        print(a + b);
    }
    void func_subs()
    {
        print(a - b);
    }
    void set_val(int aa, int bb)
    {
        a = aa;
        b = bb;
    }
    void print(int c){
        cout << c <<endl;
    }
};

class scalc:public calc{
    public:
    void func_multiply()
    {
        print(a*b);
    }
};

class tcalc:public scalc{
    public:
    void func_multiply()
    {
        print(a/b);
    }
};
class pcalc:public tcalc{

};

int main()
{
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

   // scalc c1(a, b);
    scalc c1;
    // c1.a=a;
    // c1.b=b;
    c1.set_val(a,b); // Incapsulation
    c1.func_add();
    c1.func_subs();   
    c1.func_multiply();
    c1.print(5);
    tcalc t1;
    t1.set_val(a,b);
    t1.func_multiply();
    pcalc p1;
    p1.set_val(a,b);
    p1.func_multiply();


    return 0;
}

// constructor in case of inheritance
// distructors
// static methods
// static property
// pointer to a function
// pointer to a object
// memory allocation of derived class through base class
// abstract class
// virtual polymorphism
// friend function
// * OPERATOR OVERLOADING *
// templates
// file handing
// STL