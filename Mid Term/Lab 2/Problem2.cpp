#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int even=0;
    int odd=0;

    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nArray:\n"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
                odd++;
        }
    }
    cout<<odd<<" odd numbers"<<endl;
    cout<<even<<" even numbers"<<endl;

}
