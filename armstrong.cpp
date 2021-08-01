#include <iostream>
using namespace std;
int main()
{
    int num , sum=0, rem, c;
    cout<<"Enter a number";
    cin>>num;
    c=num;
    while(num!=0)
    {
      rem=num%10;
      sum=sum+(rem*rem*rem);
      num=num/10;
    }
    if (sum==c)
        {
            cout<<"Armstrong  number";
        }
    else
    {

        cout<<"Not a armstrong number";
    }
}
