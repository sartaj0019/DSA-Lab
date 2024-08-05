#include<iostream>
using namespace std;
void LinearSearch(int arr[],int n)
{
    int x;
    cout<<"Enter the number to search."<<endl;
    cin>>x;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"Found."<<endl;
            cout<<"Its index is "<<i<<endl;
            return ;
        }
    }
    cout<<"Not found.";


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
    LinearSearch(arr,n);
    return 0;
}