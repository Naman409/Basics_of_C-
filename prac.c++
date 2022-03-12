#include<iostream>
#include<vector>

using namespace std;

void display( vector<int>v){
    for (int i = 0; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v1;
    int n;
    cin>>n;
    int element;

    for (int i = 0; i < n; i++)
    {
        cin>>element;
        v1.push_back(element);
    }
    vector<int> :: iterator iter = v1.begin();
    display(v1);
    v1.insert(iter+2,20);
    display(v1);

    
    
     

    return 0;
}