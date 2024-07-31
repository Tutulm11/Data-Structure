#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2,r3,c3,i,j;
    cout << "Enter the number of rows and columns for the Matrix_A : ";
    cin >> r1;
    cin >> c1;
    cout << "Enter the number of rows and columns for the Matrix_B : ";
    cin >> r2;
    cin >> c2;
    cout << "Enter the number of rows and columns for the Matrix_C : ";
    cin >> r3;
    cin >> c3;

     int Matrix_A[r1][c1], Matrix_B[r2][c2],Matrix_C[r3][c3];

    cout<<"Enter the elements for matrix_A : ";
    for (i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            cin>>Matrix_A[i][j];
        }
    }

    cout<<"\nEnter the elements for matrix_B : \n";
    for (i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            cin>>Matrix_B[i][j];
        }
    }

    cout<<"\nEnter the elemnts for matrix_C : \n";
    for (i = 0; i < r3; i++)
    {
        for(j = 0; j < c3; j++)
        {
            cin>>Matrix_C[i][j];
        }
    }

    cout<<"\nMatrix_A\n";
    for (i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            cout << Matrix_A[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"\nMatrix_B\n";
    for (i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            cout << Matrix_B[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"\nMatrix_C\n";
    for (i = 0; i < r3; i++)
    {
        for(j = 0; j < c3; j++)
        {
            cout << Matrix_C[i][j] << " ";
        }
        cout << endl;
    }

    if((r1 != r2!= r3) && (c1 != c2!= c3))
    {
          cout<<"Matrix addition is not possible "<<endl;
    }

    else
    {


        int Sum[r3][c3];
        for (i = 0; i < r3; i++)
        {
            for(j = 0; j < c3; j++)
            {
                Sum[i][j] = Matrix_A[i][j] + Matrix_B[i][j] + Matrix_C[i][j];
            }
        }

        cout<<"Resultant Matrix after addition"<<endl;
        for (i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                cout << Sum[i][j] << " ";
            }
            cout << endl;
        }
    }


}
