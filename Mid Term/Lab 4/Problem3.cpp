#include<iostream>
using namespace std;


 struct student{
     int Unique_id;
     int Completed_credit;
     double CGPA;
 };
int main(){
 student s[10];
cout<<"\nEnter students information: ";
for(int i=0;i<10;i++)
{
    cin>>s[i].Unique_id;
    cin>>s[i].Completed_credit;
    cin>>s[i].CGPA;
}
cout<<"\n Students who completed more than 50 credits: \n";

 for(int i=0;i<10;i++)
 {
     if(s[i].Completed_credit>50)
     {
         cout<<"\nStudents id: "<<" "<<s[i].Unique_id;

     }
 }
 cout<<endl;
cout<<"\n Students who have CGPA  more than 3.75: \n";
 for(int i=0;i<10;i++)
 {
     if(s[i].CGPA>3.75)
     {
         cout<<"\nStudents id: "<<" "<<s[i].Unique_id;

     }

 }
  cout<<endl;
}


