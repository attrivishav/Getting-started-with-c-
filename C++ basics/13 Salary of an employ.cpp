#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double base,ta,hra,da,pf,net;
    cout<<"Enter base salary :"<<endl;
    cin>>base;
    cout<<"Benefits :"<<endl;

    ta=((0.02)*base);
    cout<<"TA 2%= "<<ta<<endl;

    hra=((0.05)*base);
    cout<<"HRA 5%= "<<hra<<endl;

    da=((0.03)*base);
    cout<<"DA 3%= "<<da<<endl;

    pf=((0.01)*base);
    cout<<"PF 1%= "<<pf<<endl;

    net = base+ta+hra+da+pf;
    cout<<"Total salary after all Benefits :"<<endl;
    cout<<"Total :"<<net;
    return 0;
}