#include <iostream>
using namespace std;
int main()
{
    int num,sum=0, i ,coun,rem=0,y;
    cout<<"Enter two numbers";
    cin>>num;
    for(int i=1 ;i<=num;i++)
    {
        sum=0;
        coun=i;
        y=i;
        while(coun>0)
        {
      rem=i%10;
      sum=sum+(rem*rem*rem);
      coun=coun/10;}

      if (sum==y)
      {
          cout<<sum;
      }

        }
      }




