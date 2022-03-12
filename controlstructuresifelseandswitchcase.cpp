//******************* Control Stuctures******************

// 1.Sequence structure
// 2.Selection structure
// 3.Loop structure

#include<iostream>

using namespace std;

int main(){
    // cout<<"This is tut 9";
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;

    // Selection control structure : If else ladder 

    // if ((age < 18) && (age > 0)){
    //     cout<<"You are not allowed to the party"<<endl;
    //     }

    // else if (age == 18){
    //     cout<<"You are a kid and will be allowed to the party with kid pass"<<endl;
    //     }

    // else if (age < 1){
    //     cout<<"You are not born yet"<<endl;
    //     }

    // else {
    //     cout<<"You are allowed to the party"<<endl;
    // }

    // Selection control structure : Switch case statements

    // Agar condition sahi ho gyi toh break wla func seedh program end me le jayega aur koi bhi condition read nahi krega
    switch (age)
    {
    case 18:
        /* code */
        cout<<"You are 18"<<endl;
        break;
    case 21:
        /* code */
        cout<<"You are 21"<<endl;
        break;
    case 2:
        /* code */
        cout<<"You are 2"<<endl;
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Done with switch case";

    return 0;
}