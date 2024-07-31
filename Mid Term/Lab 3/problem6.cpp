#include <iostream>
using namespace std;

int main() {
    /*int Array_1[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};*/
    int i;
    int Array_A[10];
    cout<<"\nEnter Array A elements: "<<endl;
    for(i=0;i<10;i++)
    {
        cin>>Array_A[i];
    }
    int count[10] = {0};
 // Count occurrences of each element
    for (int i = 0; i < 10; i++) {
        count[Array_A[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] != 0) {
            cout << i << " occurs = " << count[i] << " time";
            cout<<endl;
        }

    }

}

