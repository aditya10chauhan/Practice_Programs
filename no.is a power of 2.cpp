#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x , a;
    cout<<"Enter the number"<<endl;
    cin>>x;
     a =x&& !(x&(x-1));
    if(a==0){
        cout<<"Power of two";
    }
    else
        cout<<"Not a power of two";
}

