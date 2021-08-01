#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cout<<"Enter the size of vector";
    cin>>k;
    vector <int> a;
    int num;
    for(int i=0; i<k;i++)
    {
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin() , a.end());
    for (int i =0 ; i<k; i++)
         {
             cout<<a[i]<<" ";
         }


}
