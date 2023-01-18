#include <iostream>
using namespace std;
/*
class Sample{
    int x,y;
    public:
 earlier    Sample(int a, int b){ x=a; y=b;
    cout<<"x = "<<x<<ends<<" y = "<<y<<endl;
    }
 // constructor


constructor is special meber function that is declared in public section of class .
it is first member function that is invokedd automaticalyy by compiler when object is created.
it does not have any retun type.
like normal member func constructor can be defined outside of class


    
    //  void show(){cout<<"x = "<<x<<ends<<" y = "<<y<<endl;}
   
    int calculate(){return x*y;}
};

Sample::Sample(){ x=20; y=30;
    cout<<"x = "<<x<<ends<<" y = "<<y<<endl;
    }

int main(){
    //obj.getdata(3,5);
    //obj.show();
    cout<<"x*y="<<obj.calculate();
}
*/

// whem a class havong 2 or more construcor they are having same name having diff no type of no. of argument calledd contructor overloading
/*
class sample{
    int x,y;
    public:
    sample(){
    x=20;y=30;
    cout<<"x is "<<x<<"y is "<<y<<endl;}

    sample (int a,int b){x=a;y=b;
    cout<<"x is "<<x<<"y is "<<y<<endl;}
};

int main(){
    sample obj1,objm(25,30);
}*/


// default argument

class sample{
    int x,y;
    public:
    sample (int a=1,int b=2){x=a;y=b;
    cout<<"x is "<<x<<"y is "<<y<<endl;}
};

int main(){
    sample obj1,objm(25,30);
}









