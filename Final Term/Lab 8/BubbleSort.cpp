#include<iostream>
using namespace std;
int main()
{

    int Arr[6]={92,82,21,16,18,95};
    int exchanges=0,Comparisons=0;
    int temp;
    bool swaped;

    cout<<"Unsorted elements: ";
     for(int i=0;i<6;i++)
     {
         cout<<Arr[i]<<" ";
     }

    for(int i=0;i<5;i++)
    { swaped=false;
        for(int j=0;j<5-i;j++)
        {

            if(Arr[j]>Arr[j+1])
            {
               temp=Arr[j];
               Arr[j] =Arr[j+1];
               Arr[j+1]=temp;
               exchanges++;
               swaped=true;
            }Comparisons++;

        }
        if(!swaped)
        {
            break;

        }

    }

        cout<<"\nSorted Elements: ";
        for(int i=0;i<6;i++)
        {
        cout<<Arr[i]<<" ";
        }

    cout<<"\nNumber of Comparisons = "<<Comparisons<<endl;
    cout<<"Number of exchanges = "<<exchanges<<endl;


}
