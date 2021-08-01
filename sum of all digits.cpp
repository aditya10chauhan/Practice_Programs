#include <iostream>
using namespace std;
int main()
{
    int i , num,sum=0,rem=0;
    cout<<"Enter a number"<<num;
    cin>>num;
    i=num;
    while(num>0)
    {
    rem=num%10;
    sum=sum+rem;
    num=num/10;}
    cout<<"sum of digits is:"<<sum;

}
