#include<iostream>
using namespace std;

int main()
{
string variableName;
cout<<"Enter a variable name: ";
cin>>variableName;

 if(!isalpha(variableName[0]) && variableName[0] !='_')
   {
       cout<<"Invalid Variable name .Must start with Alphabet or Underscore!";
   }
else
{
    cout<<"Valid variable name";
}

   }



