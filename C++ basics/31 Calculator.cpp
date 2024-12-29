#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int choice,a,b;
    cout<<"Select the task :"<<endl;
    cout<<"1. Sum         (+)"<<endl;
    cout<<"2. Subtraction (-)"<<endl;
    cout<<"3. Multiply    (*)"<<endl;
    cout<<"4. Divide      (/)"<<endl;
    cout<<"5. Square      (x^2)"<<endl;
    cout<<"6. Squareroot  (x^1/2)"<<endl<<endl;
    
    cout<<"Enter a number (1-6): ";

    cin>>choice;

    switch (choice) 
    {
        case 1:
            double sum;
            cout<<"Enter two numbers"<<endl;
            cout<<"a=";
            cin>> a;
            cout<<"b=";
            cin>> b; 
            sum=a+b;
            cout<<"Sum of two numbers is:"<<sum;
            break;

        case 2:
            double sub;
            cout<<"Enter two numbers"<<endl;
            cout<<"a=";
            cin>> a;
            cout<<"b=";
            cin>> b; 
            sub=a-b;
            cout<<"Subtraction of two numbers is:"<<sub;
            break;

        case 3:
            double mult;
            cout<<"Enter two numbers"<<endl;
            cout<<"a=";
            cin>> a;
            cout<<"b=";
            cin>> b; 
            mult=a*b;
            cout<<"Multiplication of two numbers is:"<<mult;
            break;
        
        case 4:
            double div;
            cout<<"Enter two numbers"<<endl;
            cout<<"a=";
            cin>> a;
            cout<<"b=";
            cin>> b; 
            div=a/b;
            cout<<"Multiplication of two numbers is:"<<div;
            break;

        case 5:
            double base,sqr,exp;
            cout<<"Enter value of base :";
            cin>>base;
            cout<<"Enter the value of exponential :";
            cin>>exp;
            sqr=pow(base,exp);
            cout<<"Square of "<<base<<" = "<<sqr;
            break;

        case 6:
            double sqrr,value;

            cout<<"Enter the Value for finding squareroot :";
            cin>>value;
            sqrr=sqrt(value);
            cout<<"Square root of "<<value<<" = "<<sqrr;
            break;
        
        default:

            cout << "Invalid choice! Please enter a number between 1 and 6." << endl;
            break;
        
    }

    return 0;
}
