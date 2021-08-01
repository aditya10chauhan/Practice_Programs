#include <iostream>
using namespace std;
int main()
{
int i , fact=1,num;
   cout<<"Enter a number";
   cin>>num;
   for(int i=1; i<=num;i++)
   {
    fact=fact*i;
   }
   cout<<"Factorial of number ="<<fact;
   return 0;
}
