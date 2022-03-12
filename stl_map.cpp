#include<iostream>
#include<map>
#include<string>

using namespace std;

void prr(map<string,int> &m){
    map<string,int> :: iterator it=m.begin();
    cout<<(*it).first;
}

int main(){
    map<string,int> mymap;
    mymap["Naman"] = 100; 
    mymap["Nayan"] = 90; 
    mymap["Namop"] = 40; 
    mymap["Nayun"] = 70; 

    mymap.insert({{"Namyu",89},{"Raju",69},{"Alay",109}});
 
    map<string,int> :: iterator iter;
    for (iter=mymap.begin(); iter!=mymap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl; 
    } 
    // prr(mymap);
    

    return 0;
}