#include <bits/stdc++.h>
using namespace std;

int isprime (int n)
             {
                 int i;
                 for(i=2;i<n;i++)
                    if(n%i==0)
                       return 0;
                       return 1;

             }
int nextprime (int n)
{
    do
        n++;
    while(!isprime(n));
        return n;
        }



int main()
{
    int n,i ;
    cin>>n;
    for(int i=2 ;i<=n/2-1;i=nextprime(i))
        if(isprime(n-i)){
        cout<<i<<"+"<<n-i<<"="<<n<<endl;
         break;

}}
