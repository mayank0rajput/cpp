#include <iostream>
using namespace std ;

class sample{
    int x=20;
    static int y;
    public :/*
    void show(){
        cout<<"x= "<<x<<endl;
        cout<<"y= "<<y<<endl;
    }
    static void display(){// staic function only allows use in static variable ..
      //  cout<<"x= "<<x<<endl;
        cout<<"y= "<<y<<endl;
    }
    
    constaructor is the first member function.*/

    sample(){
        cout<<"constructor invoked "<<y<<endl;
        y++;
    }
    /*
    sample(int x){
        cout<<"1 argument function"<<endl;
    }
    sample(int x,int y){
        cout<<"2 argument function"<<endl;
    }*/
    ~sample(){
        --y;
        cout<<"Destructor invoked "<<y<<endl;
    }
};

int sample::y=1;
int main(){
    sample obj1,obj2,obj3;
/*    obj.show();
    obj.display();
    */
}