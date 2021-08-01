#include <bits/stdc++.h>
using namespace std;
    void printpascal (int n)
    {
    int c[n][n];
    for(int i=0;i<n;i++)
    {
        for( int j=0;j<=i;j++)
{
        if(j==0 || i==j)
            c[i][j]=1;
        else
            c[i][j]=c[i-1][j-1]+c[i-1][j];
            cout<<"["<<c[i]<<","<<c[j]<<"]";


        }
        cout<<endl;
    }

}
int main(){
int n;
cin>>n;

printpascal(n);
return 0;}


