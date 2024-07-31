#include<iostream>
using namespace std;

int Oddprint(int x,int y )
{
    for(int i=x;i<=y;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}



int main()
{
    int starting_value,ending_value;
    cout<<"Enter your starting value of the range: "<<endl;
    cin>>starting_value;
     cout<<"Enter your ending value of the range: "<<endl;
    cin>>ending_value;
    cout<<"Starting value: "<<starting_value<<endl;
    cout<<"Ending value: "<<ending_value<<endl;
    Oddprint(starting_value,ending_value);


}
