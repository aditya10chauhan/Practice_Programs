#include <bits/stdc++.h>
using namespace std;
int modularexponentation (int x , int n , int m)
{
    if(n==0)
        return 1;
    else if (n%2==0)
        return modularexponentation((x*x)%m, n/2,m);
        else
        return (x * modularexponentation((x*x)%m ,( n-1)/2,m))%m;
}

int main()

{
  int x , n ,m;
  cout<<"Enter the number";
  cin>>x>>n>>m;
  cout<< modularexponentation(x,n,m);
}
