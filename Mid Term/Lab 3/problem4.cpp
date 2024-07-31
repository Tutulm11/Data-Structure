#include<iostream>
using namespace std;
int main()
{
    int size,i,n,count=0;
    /*cout<<"Enter your Array size: "<<endl;
    cin>>size;*/
    int ArrayA[10];
    cout<<"\nEnter Array A elements: "<<endl;
    for(i=0;i<10;i++)
    {
        cin>>ArrayA[i];
    }
    cout<<"\nInput a number to search: "<<endl;
    cin>>n;
    for(i=0;i<10;i++)
    {
        if(ArrayA[i]==n)
        {
            count++;
        }
    }
    cout<<"\nThe number occurs "<<count<<" times in the array "<<endl;
}
