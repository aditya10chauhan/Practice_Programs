#include <iostream>
using namespace std;
int main()
{
    int num,sum=0,i;
    cout<<"Enter a number";
    cin>>num;

    for(int i=1;i<num;i++)
    {
       if(num%i==0)
       {

           sum=sum+i;
       }
    }
    if(sum==num)
    {
        cout<<"PERFECT NUMBER";
    }
    else{cout<<"NOT A PERFECT NUMBER";}
    return 0;
}
