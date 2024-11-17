#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={10,7,12,2,8};
    int size=5;
    priority_queue<int> maxheap;
    for(int i=0;i<size;i++)
    {
        maxheap.push(arr[i]);
        if(maxheap.size()>3)
        {
            maxheap.pop();
        }
    }

    cout<<"3rd smallest element is "<<maxheap.top();

    return 0;
}