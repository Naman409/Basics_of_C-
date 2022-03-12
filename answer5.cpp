#include<iostream>
using namespace std;
void fn(int n,int arr[])
{int *ptr;
int j=0;
while(j++<n-1)
ptr=&arr[j];
*ptr=0;
}
int main()
{int list[5]={2,4,6,8,10};
int i,s=5;
fn(s,list);
for(i=0;i<s;i++)
cout<<list[i];
return 0;
}