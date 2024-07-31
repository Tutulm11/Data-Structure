
#include<iostream>
using namespace std;
int main()
{
    int size1,flag=0,i,j;
    cout<<"Enter  array size: "<<endl;
    cin>>size1;

    int Array_1[size1];

    cout<<"\nEnter the Array  elements: "<<endl;
    for(i=0;i<size1;i++)
    {
        cin>>Array_1[i];
    }



    for( i=0;i<size1;i++)
    {
        for( j=0;j<i;j++)
        {
            if(Array_1[i]==Array_1[j])
            {

                flag=1;
                break;

            }
        }
         if(i==j)
            {

                cout<<Array_1[i]<<" ";
            }

    }

    if(flag==0)
    {
    cout<<"\nArray Already Unique! ";

    }
}
