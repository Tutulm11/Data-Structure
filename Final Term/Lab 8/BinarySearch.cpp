#include <iostream>
using namespace std;

int main()
{


    int Arr[]={92,82,21,16,18,95,25,10};
    int size=sizeof(Arr)/sizeof(Arr[0]);
    int temp; int numComparisons=0;
    int first=0;
    int last=size-1;

    cout<<"Input Array = ";
    for(int i=0;i<size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(Arr[j]>Arr[j+1])
            {
               temp=Arr[j];
               Arr[j] =Arr[j+1];
               Arr[j+1]=temp;
            }

        }

    }
     int data;
    cout<<"\nInput Searching item  = ";
    cin>>data;
    cout<<"\nSorted Array = ";
    for(int i=0;i<size;i++)
    {
    cout<<Arr[i]<<" ";
    }
    cout<<endl;

while(first<=last)
 {
     int mid=(first+last)/2;
     numComparisons++;

     if (data==Arr[mid])
     {
            cout<<data<<" is found in the  array at the index number = "<<mid<<endl;
            cout<<"Number of comparisons = "<<numComparisons<<endl;
            break;
     }
      else if(data<Arr[mid])
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }

        if(first>last)

    {
        cout<<data<<" is not found in the  array. "<<endl;
        cout<<"Number of comparisons = "<<numComparisons<<endl;
    }

}
}
