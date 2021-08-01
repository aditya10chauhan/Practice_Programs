#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m;

    cout<<"Enter n and m values";
    cin>>n>>m;
    string s;
    cin>>s;
    sort(s.begin()+n,s.end()+m);
    cout<<s;
}

