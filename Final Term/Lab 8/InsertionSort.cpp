#include <iostream>
using namespace std;

int main()

{
    int temp,j;
    int comparisons=0, exchanges=0;
    int arr[] = {92,82,21,16,18,95};
    int size = sizeof(arr) / sizeof(arr[0]);
     cout<<"Unsorted Elements: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<size;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            comparisons++;
            exchanges++;
            arr[j+1]=arr[j];

            j--;
        }
        exchanges++;
        arr[j+1]=temp;
    }
    cout<<"\nSorted Elements: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout << "\nNumber of comparisons = " << comparisons << endl;
    cout << "Number of Exchanges = " << exchanges << endl;
}
