#include<iostream>
using namespace std;

int main()
{
    int arr[]={92,82,21,16,18,95};
int temp;int exchanges=0,comparisons=0;

    cout<<"Unsorted elements: ";
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<5;i++)
    {

        int min=i;
        for(int j=i+1;j<6;j++)
        { comparisons++;

            if(arr[j]<arr[min])
            {
                min=j;

            }
        }
        if(min!=i)
        {
          temp=arr[min];
          arr[min]=arr[i];
          arr[i]=temp;
        exchanges++;

        }

    }
    cout<<"\nSorted Elements: ";
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nNumber of comparisons = "<<comparisons;
    cout<<"\nNumber of exchanges = "<<exchanges;

}
