#include <bits/stdc++.h>
using namespace std;
int i;
int main()
{
    int maxsum , n ,x, endsum,start=0,s=0,w;
    int e=0;
    cin>>n;
   vector <int> k;

    for(int i=0 ;i<n;i++)
    {
       cin>>x;
       k.push_back(x);
    }
    maxsum=k[0];
    endsum =0;
    for(int j=0 ;j<k.size();j++)
    {
        endsum = endsum + k[j];
        {
            if(maxsum<endsum){
            maxsum = endsum;
            start=s;
            e=i;
            }
            if(endsum<0)
            {
                endsum=0;
                s=i+1;
            }
        }
    }
    cout<<maxsum;
    cout<<start ;
    cout<<e;
    for(int w=start ; w<=e;w++)
    {
        cout<<"["<<w<<","<<"]";
    }}
