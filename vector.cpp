#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , maxend=0 , maxsum;
    cin>>n;
    vector < int > k;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        k.push_back(x);}
        maxsum=k[0];
        for( int j=0; j<k.size();j++)
        {
            maxend = maxend + k[j];
            if( maxsum < maxend)
            {
                maxsum = maxend;
            }
            if(maxend<0){
                maxend =0;
            }

        }
        cout<<maxsum;



}



