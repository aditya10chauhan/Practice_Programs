#include <bits/stdc++.h>
using namespace std;
int gcd (int a , int b);
int main()
{
    int a, b ;
    cout<<"ENTER TWO NUMBER";
    cin>>a;
    cin>>b;
   cout<<"The gcd of"<<a<<" and "<<b<<" is "<<gcd( a,
                                                  b);


}
int gcd (int a , int b)
{

    if (b==0)
        return a;
    else
        return gcd (b , a%b);
}
