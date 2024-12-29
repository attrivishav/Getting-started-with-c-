#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,fact=1;
    for(int i=1;i<=10;i++)
    {
        a=i;
        fact=fact*a;
        cout<<a<<". "<<fact<<endl;
    }
 return 0;
}