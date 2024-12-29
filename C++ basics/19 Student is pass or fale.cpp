#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double eng,phy,chem,math,comp,total;
    cout<<"Enter Marks for student :"<<endl;
    cout<<"English :";
    cin>>eng;
    cout<<"Physics :";
    cin>>phy;
    cout<<"Chemistry :";
    cin>>chem;
    cout<<"Math :";
    cin>>math;
    cout<<"Computer science:";
    cin>>comp;
    total=eng+phy+chem+math+comp;
    cout<<" Marks Obtained = "<<total<<endl;
    if(total>=300)
    {
        cout<<"Pass";

    }
    else
    {
        cout<<"Fale";

    }
    return 0;
}