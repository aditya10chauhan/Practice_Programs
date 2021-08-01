#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m , n,i,j,k,l ;
    l=m+n;
    vector <int> a;
    vector <int> b ;
    vector <int> c;
    cout<<"ENTER VECTOR A SIZE";
    cin>>m;
    cout<<"ENTER VECTOR B SIZE";
    cin>>n;
    int num1 , num2,num3;
    for (int i=0; i<m;i++)
    {
        cin>>num1;
        a.push_back(num1);
    }
    for (int j=0;j<n;j++)
    {
        cin>>num2;
        b.push_back(num2);
    }
    for(int k=0;k<l;k++)
    {
        cin>>num3;
        c.push_back(num3);
    }
    sort(a.begin(),a.end());
    sort(b.begin(), b.end());
    while(i<m &&j<n)
    {
        if(a[i]<=b[j])
        {
        c[k]=a[i];
        a[i]++;
        k++;
        }

        else
        {
            c[k]=b[j];
            b[j]++;
            k++;

        }

    }
    while (i<m)
    {
        c[k++]=a[i++];
    }
    while(j<m)
    {
        c[k++]=b[j++];
    }
    for(int k=0;k<=l;l++)
    {
        cout<<c[k];
    }}


