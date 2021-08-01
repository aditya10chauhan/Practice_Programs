#include <iostream>
using namespace std;
int poweroftwo (int x)
{
    if(x==0)
        return 0;
        else{
        while(x!=1)
        {
            if(x%2!=0)
                return 0;
                x/=2;


    }
    return 1;

}
int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;
    poweroftwo (int num);
    if(num==1)
    {
        cout<<"Power of two";
    }
    if(num==0)
    {
        cout<<"Not a power of two";
    }
    return 0;
    }


