#include<iostream>
using namespace std;
int main()
{
    int v;
    cout<<"Enter initial velocity."<<endl;
    cin>>v;
    int count=0;
    while(v>0)
    {
        v=v/2;
        count++;
    }
    cout<<"Count is "<<count<<endl;
}