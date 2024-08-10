//prashant bajpai 
//102
 /**  #include<iostream>
using namespace std;
int main()
{
    int i=1;
    do
    {
       cout<<i<<endl;
       i++;
    } while (i<=10);
    return 0;
}**/ 
//password check 
#include<iostream>
#include<string>
using namespace std;
int main()
{
   int i=1;
   string password ="siu",newpassword;
   do
   {
    cout<<"Enter password: ";
    cin>>newpassword;
     if(newpassword==password)
     {
      cout<<"Success";
      break;
     }
     else
     {
      cout<<"Try again!"<<endl;
     }
     i++;
   } while (i);
   
}