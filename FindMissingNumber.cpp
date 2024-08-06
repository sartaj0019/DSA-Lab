#include<iostream>
using namespace std;
void missing(int arr[],int size)
{
    // XOR of all the elements present in the given array.
    int a=arr[0];
    for(int i=0;i<size;i++)
    {
        a=a^arr[i];
    }
    
    // XOR of all the consective elements starting from the first element of the given array.
    
    int b=arr[0];
    int n=arr[0];
    for(int i=0;i<size+1;i++)
    {
        b=b^n;
        n++;
    }

    int MissingNumber=a^b;
    cout<<"Missing number is "<<MissingNumber<<endl;
    return;
}
int main()
{
    int n;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array."<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    missing(arr,n);
    return 0;
}
