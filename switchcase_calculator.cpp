//Prashant bajpai 
//23070123102
//exp5- switch case simple calculator 
#include<iostream>
using namespace std;
int main()
{
    int a,b,ch;
    cout<<"Enter a number :";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;
    cout<<"Enyer your choice: "<<endl<<
    " 1: addition, 2:subtraction, 3:multiplication, 4:division";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"The addition of "<<a<<" and "<<b<<" is "<<(a+b);
        break;
        case 2:
        cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<(a-b);
        break;
        case 3:
        cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<(a*b);
        break;
        case 4:
        if(b!=0)
        cout<<"The division of "<<a<<" and "<<b<<" is "<<(a/b);
        else
        cout<<"Enter valid number ";
          break;

    }
return 0;
}