#include<iostream>
using namespace std;
int main()
{
    double b , h;
    double area;
    cout<<"enter the base of triangle: ";
    cin>>b;
    cout<<"enter the hight of triangle: ";
    cin>>h;
    area = (0.5)*b*h;
    cout<<"area of triangle is :"<<area;
    return 0;
}