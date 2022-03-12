#include<iostream>
#include<vector>
#include<list>

using namespace std;

void display(list<int> &l){
    list<int> :: iterator iter ;
    for (iter = l.begin(); iter!=l.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;
    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(1);
    list1.push_back(4);
    list1.push_back(5);

    display(list1);
    // list1.pop_front();
    // list1.remove(1);
    // list1.sort();
    // list1.reverse();
    // display(list1);

    list<int> list2(5);
    list<int> :: iterator it = list2.begin();
    *it = 10;
    it++;
    *it = 20;
    it++;
    *it = 30;
    it++;
    *it = 40;
    it++;
    *it = 50;

    display(list2);

    // list1.merge(list2);
    // cout<<"List 1 after merging : ";
    // display(list1);

    return 0;
}