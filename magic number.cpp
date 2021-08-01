#include<iostream>
using namespace std;
int Getsumofdigit(int num);
int Getreverseofnumber(int sumofdigits);
int main()
{
    int num,sumofdigit,reverseofnumber;
    cout<<"Enter a number";
    cin>>num;
    sumofdigit=Getsumofdigit(num);
    reverseofnumber=Getreverseofnumber(sumofdigit);
    if(sumofdigit*reverseofnumber==num)
    {
        cout<<"magic number";
    }
    else{cout<<"Not a magic number";}
}
int Get1sumofdigit (int n)
{
    int sum=0,x;
    while(n>0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    return sum;}
    int Getreverseofnumber (int n)
    {
        int rev=0,x;
        while(n>0)
        {
          x=n%10;
          rev=rev*10+x;
          n=n/10;
        }
        return rev;
    }

