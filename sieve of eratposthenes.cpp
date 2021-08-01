#include <bits/stdc++.h>
using namespace std;
int sieve (int n)
{
bool prime[n+1];
{
for(int i=0 ; i<=n;++i)
    prime[i]=true;
    prime[0]=false;
    prime[1]=false;
    for(int i=2 ; i*i<=n;++i){
        if(prime[i]==true)
        {
            for( int j=i*i;j<=n;j+=i)
                prime[j]=false;
        }
    }
}
for(int k=2;k<=n;k++)
{
    if(prime[k]==true)
        cout<<k<<endl;
}}



int main()
{
    int n;
    cout<<"ENTER THE NUMBER";
    cin>>n;
     sieve(n);
}

