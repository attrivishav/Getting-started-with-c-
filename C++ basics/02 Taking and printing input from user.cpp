#include <iostream>
using namespace std; 

int main()
{
   string name ;
   int age ;
   int rollcall ;

    cout<<"Enter your information"<<endl;
    cout<<"Name:";
    cin>> name;
    cout<<"Age:";
    cin>> age; 
    cout<<"Rollcall:";
    cin>> rollcall;

    cout<<'\n'<<"Entered information :"<<endl;
    cout<<"Name :"<<name<<'\n'<<"Age :"<<age<<'\n'<<"Rollcall:"<<rollcall<<endl;
    return 0;
}