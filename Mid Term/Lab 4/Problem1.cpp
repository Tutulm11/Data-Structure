#include<iostream>
using namespace std;

int main()
{
    int row,col;

    cout<<"Enter the row size: ";
    cin>>row;
    cout<<"Enter the col size: ";
    cin>>col;
    int Matrix_1[row][col];
    int TransM[row][col];

    cout<<"\nEnter the elements of Matrix 1: ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>Matrix_1[i][j];
        }
        cout<<endl;
    }
     cout<<"\nMatrix 1 outputs: \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<Matrix_1[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpose matrix
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
          TransM[j][i]=Matrix_1[i][j];
        }
    }

    cout<<"\nTranspose Matrix outputs: \n";
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<TransM[i][j]<<" ";
        }
        cout<<endl;
    }


}
