#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int p,si,r,t=1;
    cout<<"Enter the principal "<<endl;
    cin>>p;
    cout<<"Enter %rate per-anum "<<endl;
    cin>>r;
    si=(p*r*t)/100;
    cout<<"Simple intrest 1 year :"<<endl<<si;

    return 0;
}