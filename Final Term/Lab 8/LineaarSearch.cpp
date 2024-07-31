#include<iostream>
using namespace std;

int main() {
    int arr[8] = {92, 82, 21, 16, 18, 95, 25, 10};
    int data;
    int Comparisons = 0;
    int index = -1;

    cout<<"Input Array = ";
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nInput Searching Array = ";
    cin>>data;

    for (int i = 0; i < 8; ++i) {
        Comparisons++;
        if (arr[i] == data) {
            index = i;
            break;
        }
    }
    cout<<endl;

    if (index != -1) {
        cout << data << " is found in the array at index number = " << index << endl;
        cout << "Number of comparisons = " << Comparisons << endl;
    } else {
        cout << data << " is not found in the array." << endl;
    }

    return 0;
}
