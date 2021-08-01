#include<iostream>
using namespace std;
int main()
{
    int  num,sum=0,fact=1,temp,rem=0;
    cout<<"Enter a number";
    cin>>num;
    temp=num;
    while(num>0)
    {
        rem=num%10;
fact=1;
        for(int i=1;i<=rem;i++)
        {
            fact=fact*i;}
            sum=sum+fact;

        num=num/10;
    }
        if (sum==temp)
        {
            cout<<"Strong number";
        }
        else{cout<<"Not A Strong number";}

    }

