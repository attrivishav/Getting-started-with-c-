#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int fnc;
    double angle,value,rad;
    cout<<"Trignometric Functions :"<<endl;
    cout<<"1 Sin"<<endl;
    cout<<"2 Cos"<<endl;
    cout<<"3 Tan"<<endl;
    cout<<"4 Cosec"<<endl;
    cout<<"5 Sec"<<endl;
    cout<<"6 Cot"<<endl;
    cout<<"Enter your choice (1 to 6) :";
    cin>>fnc;

    switch (fnc) 
    {
        case 1:
            cout<<"Enter angle :";
            cin>>angle;
            rad=angle*(M_PI/180);
            value=sin(rad);
            cout<<"sin("<<angle<<") ="<<value;
            break;
        case 2:
            cout<<"Enter angle :";
            cin>>angle;
            rad=angle*(M_PI/180);
            value=cos(rad);
            cout<<"cos("<<angle<<") ="<<value;
            break;
        case 3:
            cout<<"Enter angle :";
            cin>>angle;
            rad=angle*(M_PI/180);
            value=tan(rad);
            cout<<"tan("<<angle<<") ="<<value;
            break;
        case 4:
            cout<<"Enter angle :";
            cin>>angle;
            rad=angle*(M_PI/180);
            value=asin(rad);
            cout<<"cosec("<<angle<<") ="<<value;
            break;
        case 5:
            cout<<"Enter angle :";
            cin>>angle;
            rad=angle*(M_PI/180);
            value=acos(rad);
            cout<<"sec("<<angle<<") ="<<value;
            break;
        case 6:
            cout<<"Enter angle :";
            cin>>angle;
            rad=angle*(M_PI/180);
            value=atan(rad);
            cout<<"cot("<<angle<<") ="<<value;
            break;
        
        default:
            cout << "Invalid Option !" << endl;
            break;
    }
    
    return 0;
 }
