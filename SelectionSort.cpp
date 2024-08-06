#include<iostream>
using namespace std;
void selectionSort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            int temp;
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted elemets are...."<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
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
    selectionSort(arr,n);
    return 0;
}