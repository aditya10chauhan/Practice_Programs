#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num ,sum=0;
     ;
    cout<<"Enter the number";
    cin>>num;
    for (int i =0 ;i<num;i++)
    {
        if(i%3==0 || i%5==0)
            sum+=i;
    }
    cout<<sum;

}
