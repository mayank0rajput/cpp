// oopm class

#include <iostream>
using namespace std;
#include <iomanip> //modify output

int main(){
  /*  cout<<setfill('*');
    cout<<setw(10);
    cout<<"111"<<endl;
    cout<<setw(10);
    cout<<"10\n"; */

   /*  int x;
     cout<<"Enter value of x ";
     cin>>x;
     cout<<"value of x= "<<x<<endl;
     cout<<"octal value "<<oct<<x<<endl;
     cout<<"hexa value "<<hex<<x<<endl;
     cout<<"decimal value "<<dec<<x<<endl;
     cout<<setbase(8)<<x<<endl;
*/

    // double x;
    // cout<<"Enter x:"<<endl;
    // cin>>x;
    // cout<<"scientific value of x ="<<scientific<<x<<endl;
    // cout<<fixed<<x<<endl;
    // cout<<setprecision(5)<<x<<endl;

     int x,*ptr;
     cout<<"enter value of x=";
    cin>>x;
     ptr=&x;
     cout<<"value of x="<<x<<endl;
     cout<<"address of x="<<ptr<<endl;
     cout<<"value of x="<<*ptr<<endl;
     cout<<"value of x="<<*&*ptr<<endl;

}