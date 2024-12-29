#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int base,exp=2,result;
    cout<<"enter value of base :";
    cin>>base;
    result=pow(base,exp);
    cout<<"Square of "<<base<<" = "<<result;
    return 0;
}