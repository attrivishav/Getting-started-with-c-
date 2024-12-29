 #include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter any letter :";
    cin>>a;
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        cout<<" is a Vovel.";
        
    }
    else if ((a >= 'a' && a <= 'z')) 
    {
        cout << a << " is a consonant." << endl;
    } 
    else {
        cout << "Invalid input! Please enter a letter." << endl;
    }
   return 0;

}