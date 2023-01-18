#include <iostream>
using namespace std;
#include <iomanip>

int main(){
    { int a=5,b=192;
      cout<<"a&b="<<(a&b)<<endl;
      cout<<"a|b="<<(a|b)<<endl;
      cout<<"a^b="<<(a^b)<<endl;

     cout<<"a<<1="<<(a<<1)<<endl; //left hand operator
     cout<<"a<<2="<<(a<<2)<<endl;
     cout<<"b<<1="<<(b<<1)<<endl;
     cout<<"b<<2="<<(b<<2)<<endl;
     cout<<"a>>1="<<(a>>1)<<endl;
     cout<<"a>>2="<<(a>>2)<<endl;
     cout<<"b>>1="<<(b>>1)<<endl;
     cout<<"b>>2="<<(b>>2)<<endl;}

     int a=12,b=-125;
     cout<<"a="<<(a)<<endl;
     cout<<"~a= "<<(~a)<<endl;
     cout<<"b "<<(b)<<endl;
     cout<<"~b "<<(~b)<<endl;

     cout<<"value of a= "<<a<<endl;
     cout<<"octal value "<<oct<<a<<endl;
     cout<<"hexa value "<<hex<<a<<endl;
     cout<<"decimal value "<<dec<<a<<endl;
     cout<<setbase(0)<<a<<endl;

 /*    int a=128,*ptr;
     ptr=&a;   //rename of a
     cout<<"a= "<<a<<endl;
     cout<<"a= "<<*ptr<<endl; //value at that address
     cout<<"address= "<<ptr<<endl;
     cout<<"address= "<<&a<<endl;
     cout<<"address= "<<&*ptr<<endl;*/

    /* a=38 b= 192 calculate lohgival or ND EX OR 
    A=

    int x=11,y=12;
    cout<<(x <= y)?x:y;
    return 0;
*/} 