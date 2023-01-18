//inheritance
/*
1. Single
2. Multilevel
3. Multiple
*/
// by default private

#include <iostream>
using namespace std;

class A{
    protected:
    int x ;

    public:
    void getx(){
        cout<<"Enter x = ";
        cin>>x;
    }
};

class B{
    protected:
    int y;

    public:
    void gety(){
        cout<<"Enter y ";
        cin>>y;
    }

}; 

class C:public A,public B{
    public :
    void Sum(){
        cout<<"Sum "<<(x+y);
    }
};

int main(){
    C obj;
    obj.getx();
    obj.gety();
    obj.Sum();
}