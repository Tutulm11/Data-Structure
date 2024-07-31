#include<iostream>
using namespace std;

void encode(string s,int j)
{
    for(int i=0;i<s.length();i++)
    {
        if(i%3==2)
        {
            s[i]=s[i]+2;
        }
        else{
            s[i]=s[i];
        }
    }
    cout<<"\nConverted string: "<<s<<endl;

}

int main()
{
    string s;
    int j;
    cout<<"\nEnter the sample string: ";
    getline(cin,s);
    cout<<"\nEnter the integer: ";
    cin>>j;
    cout<<"\nSample string: "<<s;
    cout<<"\nSample integer: "<<j;
    encode(s,j);
}
