#include<iostream>
using namespace std;
void bubble_sort(int a[],int n);
int main()
{
    int a[]={12,34,32,36,11,56,75,68,53,24};
     bubble_sort( a, 10);
    for(int i =0;i<=9;i++)
        cout<<a[i]<<" ";


}
void bubble_sort(int a[] , int n)
{


    int temp,round,i;
    for(round=1;round<=n-1;round++)
    {
        for(i=0;i<=n-1-round ;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }


        }
    }
}
