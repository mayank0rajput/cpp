/*#include <iostream>
using namespace std;

class sample;       //class prototype
class record{
    int x;
    public :
    friend void display(record,sample);    //friend function of 2 class
};

class sample{
    int y;
    public :
    friend void display(record,sample); //function friend of 2 class 
};

void display(record obj1,sample obj2){
    cout<<"Enter value of x="; cin>>obj1.x;
    cout<<"Enter value of y="; cin>>obj2.y;
    cout<<"Addition of 2 numbers ="<<(obj1.x+obj2.y)<<endl;
}

int main(){
    record r1;      sample s1;
    display(r1,s1);
}*/

/*---------------------------------------------------------------------------------------
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-----------------------------------------------------------------------------------------*/
/*
#include <iostream>
using namespace std;

class record{
    int x;
    public :
    friend class sample;    //friend function of 2 class
};

class sample{
    int p,q;
    public :
    void calculate(){   record r1;
    cout<<"Enter value of x="; cin>>r1.x;
    cout<<"Enter value of y="; cin>>q;
    cout<<"Addition of 2 numbers ="<<(obj1.x+obj2.y)<<endl;
    }; //function friend of 2 class 
};

void display(record obj1,sample obj2){
    cout<<"Enter value of x="; cin>>obj1.x;
    cout<<"Enter value of y="; cin>>obj2.y;
    cout<<"Addition of 2 numbers ="<<(obj1.x+obj2.y)<<endl;
}

int main(){
    record r1;      sample s1;
    display(r1,s1);
}*/

#include <iostream>
using namespace std;
class parent{
    int x,y;
    public:
    parent (int a ,int b){
        x=a;    y=b;
    }
};

class child(int m,int n,int o):parent(m,n){
    p=m;    q=n;    r=o;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"p="<<p<<endl;
    cout<<"q="<<
}

// friend keyword, parameterized constructor , explicit invokation and 