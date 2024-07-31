#include<iostream>
using namespace std;
int main(){

int arr[10];

cout<<"Enter the array: "<<endl;
for(int i=0;i<10;i++){
    cin>>arr[i];
}
for(int i=0;i<10;i++){
int count=0;
    int x=arr[i];
    if(arr[i]!=INT_MAX){
        for(int j=i;j<10;j++){
            if(x==arr[j]){
                count++;
                arr[j]=INT_MAX;
            }
        }
        cout<<x<<" occurs = "<<count<<" times"<<endl;
    }
}
}




