#include<iostream>
using namespace std;

int main()
{
    int size1,size2,flag=0,i,j;
    cout<<"Enter First array size: "<<endl;
    cin>>size1;
    cout<<"Enter Second array size: "<<endl;
    cin>>size2;
    int Array_1[size1],Array_2[size2],Array_3[size1];
    cout<<"\nEnter Array A elements: "<<endl;
    for(i=0;i<size1;i++)
    {
        cin>>Array_1[i];
    }
    cout<<"\nEnter  Array B elements: "<<endl;
    for(i=0;i<size2;i++)
    {
        cin>>Array_2[i];
    }


    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            if(Array_1[i] == Array_2[j]) {
                // Check if the element is already in Array_3
                bool alreadyExists = false;
                for(int k = 0; k < flag; k++) {
                    if(Array_1[i] == Array_3[k]) {
                        alreadyExists = true;
                        break;
                    }
                }
                if(!alreadyExists) {
                    Array_3[flag] = Array_1[i];
                    flag++;
                }
                break;
            }
        }
    }

    if(flag == 0) {
        cout << "No common elements!";
    } else {
        cout << "Common elements: ";
        for(int i = 0; i < flag; i++) {
            cout << Array_3[i] << " ";
        }
    }

    return 0;
}

