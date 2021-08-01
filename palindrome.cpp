#include <iostream>
using namespace std;
int main()
{
    int num , rev=0 ,n ,rem=0;
    cout<<"Enter a number";
    cin>>num;
    n=num;
    while(num>0)
    {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
    }

        if(rev==n)

            cout<<"palindrome number";

        else

          cout<<"not a palindrome number";

    }





