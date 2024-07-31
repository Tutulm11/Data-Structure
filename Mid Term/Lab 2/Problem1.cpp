#include<iostream>
using namespace std;
int main()
{
    int arr[10];

    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

   cout<<"Array elements is normal order: "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Array elements is reverse order: "<<endl;
    for(int i=9;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
