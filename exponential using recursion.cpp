
#include<bits/stdc++.h>
using namespace std;
int recursiveexo (int x ,int n)
{
    if(n==0)
    return 1;
    else
        return  x *recursiveexo(x,n-1);

}
int main()
{
    int x , n;
    cout<<"Enter number and power";
    cin>>x>>n;
  cout<<  recursiveexo (x , n);



}
