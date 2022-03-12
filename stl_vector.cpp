#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v1;
    int element,size;
    cout<<"Enter the size of your vector : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element you want to add in v1 : ";
        cin>>element;
        v1.push_back(element);
    }
    // v1.pop_back();
    vector<int> :: iterator iter = v1.begin();
    display(v1);
    v1.insert(iter+4,3,7);
    display(v1);

    return 0;
}