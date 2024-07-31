#include<iostream>
using namespace std;

int factorialcheck(int x)
{
    int count=0,fact=1;

    for(int i=2;i<=x/2;i++)
    {
        if(x % i == 0)
          {
              cout<< x <<" is not a Prime Number."<<endl;
              count=1;
              break;
          }
    }
    if (count==0)
      {
          cout << x << " is a Prime Number."<<endl;
          for(int i = 1; i <= x; i++)
          {
              fact = fact * i;
          }
          cout<<"Factorial of " << x << " is: "<<fact<<endl;
      }
}
int main()
{
   int n;
   cout<<"Enter your number: "<<endl;
   cin>>n;
   factorialcheck(n);
}
