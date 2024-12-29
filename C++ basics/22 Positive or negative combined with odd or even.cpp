#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cout<<"Entyer a number :";
    cin>>a;
    if(a<0)
    {
        cout<<"Negative"<<endl;
        if(a%2==0)
        {
            cout<<"Even";
        }
        else
        {
            cout<<"Odd";

        }
    }
    if(a>0)
    {
        cout<<"Positive"<<endl;
        if(a%2==0)
        {
            cout<<"Even";
        }
        else
        {
            cout<<"Odd";

        }
    }
    else
    {
        cout<<"Neutral"<<endl;
        if(a%2==0)
        {
            cout<<"Even";
        }
        else
        {
            cout<<"Odd";

        }
    }
 return 0;

}