#include<bits/stdc++.h>
using namespace std;
int binaryexpo(int x , int n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
    return binaryexpo(x*x ,n/2);
   else
    return  x * binaryexpo(x*x ,(n-1)/2);
}
int main()
{
    int x , n;
    cout<<"Enter the number and power"<<endl;
    cin>>x>>n;
    cout <<binaryexpo(x,n);




}
