#include<iostream>
using namespace std;
int main()
{
    int size1,size2;
    cout<<"Enter First array size: "<<endl;
    cin>>size1;

    cout<<"Enter Second array size: "<<endl;
    cin>>size2;

    int Array_1[size1],Array_2[size2],Array_3[size1+size2];
    cout<<"\nEnter First array elements: "<<endl;
    for(int i=0;i<size1;i++)
    {
        cin>>Array_1[i];
    }

    cout<<"\nEnter Second array elements: "<<endl;
    for(int i=0;i<size2;i++)
    {
        cin>>Array_2[i];
    }
    //operations
    for(int i=0;i<size1;i++)
    {
        Array_3[i]=Array_1[i];
    }
     for(int i=0;i<size2;i++)
    {
        Array_3[i+size1]=Array_2[i];
    }

    cout<<"\nNew array in normal order after marging: "<<endl;
    for(int i=0;i<size1+size2;i++)
    {
        cout<<Array_3[i]<<" ";
    }
    cout<<"\nNew array in reverse order after marging: "<<endl;
    for(int i=(size1+size2)-1;i>=0;i--)
    {
        cout<<Array_3[i]<<" ";
    }

}
