#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double area,p=3.142,l,b,h,s,r,d1,d2;
    int choice;
    cout<<"Select the shape :"<<endl<<endl;
    cout<<"1. Square"<<endl;
    cout<<"2. Rectangle"<<endl;
    cout<<"3. circle"<<endl;
    cout<<"4. Triangle"<<endl;
    cout<<"5. Hexagon"<<endl;
    cout<<"6. Parallelogram"<<endl;
    cout<<"7. Rhombus"<<endl<<endl;

    cout << "Enter a number (1-7): ";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            cout<<"Enter the side of square :";
            cin>>s;
            area= s*s;
            cout<<"Area of square :"<<area;
            break;

        case 2:
            cout<<"Enter the Length of square :";
            cin>>l;
            cout<<"enter the breadth:";
            cin>>b;
            area= l*b;
            cout<<"Area of rectangle :"<<area;
            break;

        case 3:
            cout<<"enter the radius of circle :";
            cin>>r;
            area=(p*(r*r));
            cout<<"area of circle is:"<<area;
            break;

        case 4:
            cout<<"enter the base of triangle: ";
            cin>>b;
            cout<<"enter the height of triangle: ";
            cin>>h;
            area = (0.5)*b*h;
            cout<<"area of triangle is :"<<area;
            break;

        case 5:
            cout<<"Enter the side of Hexagon :";
            cin>>s;
            area= (2.598)*s*s;
            cout<<"Area of Hexagon :"<<area;
            break;

        case 6:
            cout<<"Enter the Length of Parallelogram :";
            cin>>b;
            cout<<"enter the breadth:";
            cin>>h;
            area= b*h;
            cout<<"Area of parallelogram :"<<area;
            break;
        
        case 7:
            cout<<"Enter the diagnol-1 of Rhombud :";
            cin>>d1;
            cout<<"Enter the diagonal-2 :";
            cin>>d2;
            area= d1*d2;
            cout<<"Area of Rhombus :"<<area;
            break;
            

        default:
            cout << "Invalid choice! Please enter a number between 1 and 3." << endl;
            break;
    }

    return 0;
}