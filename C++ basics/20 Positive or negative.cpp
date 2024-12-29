#include<iostream>
using namespace std;
int main()
{
    double a;
    cout<<"Enter any integer :";
    cin>>a;
    if (a>0)
    {
        cout<<"Positive";
    }
    else if(a<0)
        {
            cout<<"Negative";
        }
    else
    {
        cout<<"Enter valid number";
    }
    return 0;
    
}