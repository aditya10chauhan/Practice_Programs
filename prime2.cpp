#include<bits/stdc++.h>
using namespace std;
int prime (int n ){
for (int i=2 ;i*i<=n;++i)
{
    if(n%i==0)
    {
        return 0;
}}
return 1;}
int main()
{
    int n ,i;
    cout<<"ENTER THE NUMBER";
    cin>>n;
    cout<< prime(n);
}
