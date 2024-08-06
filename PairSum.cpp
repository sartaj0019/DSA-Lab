#include<iostream>
using namespace std;
void pairSum(int arr[],int size)
{
    cout<<"Pair sum which are present in that array is....."<<endl;
    int sum=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
           sum=arr[i]+arr[j];
           for(int k=0;k<size;k++)
           {
            if(sum==arr[k])
            {
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
           } 
        }
    }
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
    pairSum(arr,n);
    return 0;
}