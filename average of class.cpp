#include<iostream>
using namespace std;
 int main()
 {
     int num , i,sum=0 ;
     float avg;
     cout<<"Enter  number of students";
     cin>>num;
     int arr[num];
     cout<<"Enter marks of students";
     for(i=0;i<num;i++)
     {
         cin>>arr[i];
         sum=sum+arr[i];

     }
     avg=sum/num;
     cout<<"Average of class"<<avg;
     return 0;



 }
