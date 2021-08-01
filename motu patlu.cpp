#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i=0, j=n-1;
       int  sum1=0;
        int sum2=0;
        if(n==1)
        {
        cout<<"1 0"<<endl;
            cout<<"motu"<<endl;


        }
        else
        {
            int flag=0;
            sum1=0;
            sum2=0;
            while(i<=j)
            {
                if(sum1<(2*sum2))
                {
                    while(sum1<=(2*sum2)&&i<j)
                        sum1+=a[i];
                    i++;
                }
                else
                    if(sum1>sum2)
                {
                    while((sum1>(2*sum2))&&j>=i){
                        sum2+=a[j];
                    j--;
                }

            }
        }
        int p ,q;
        p=i;
        q=n-j-1;
        cout<<p<<" "<<q<<endl;
        if(p>q)
            cout<<"MOTU";
            else
                cout<<"PATLU";
    }}
    return 0;}


