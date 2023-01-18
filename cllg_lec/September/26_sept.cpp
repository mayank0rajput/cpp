#include <iostream>
using namespace std;
/*

creating of variable is instance variable
static variable is shared variable between objects

class time{
    int hr,min;
    public:
    void getData(){
        cout<<"Enter hour="; cin>>hr;
        cout<<"Enter minute="; cin>>min;
    }
    void add(time obj1,time obj2){ //   passing objects as argument 
        hr=obj1.hr+obj2.hr;
        min=obj1.min+obj2.min;
    }
    //return object as argument
    time add(time obj){ 
        time temp;
        temp.hr=hr+obj.hr;
        temp.min=min+obj.min;
        return temp;
    }

    void show(){
        hr=hr+min/60;
        min=min%60;
        cout<<hr<<"hour     "<<min<<"minutes"<<endl;
    }
};

int main(){
    time t1,t2,t3;
    t1.getData();
    t2.getData();
    cout<<"First time value=";      t1.show();
    cout<<"Second time value=";     t2.show();
 //   t3.add(t1,t2);
   // cout<<"total time ";            t3.show();

   t3=t1.add(t2);
   t3.show();
}*/

class sample{
    int p=10;
    static int q;
    public:
    void calc(){p++;q++;}
    void show(){cout<<"p="<<p<<endl;
    cout<<"q="<<q<<endl;}
    
};
int sample::q=100;  //static def
int main(){
    
    sample obj1,obj2,obj3;
    cout<<"1st obj"<<endl;
    obj1.show(); obj1.calc(); obj1.show();
    cout<<"2nd obj"<<endl;
    obj2.show(); obj2.calc(); obj2.show();
    cout<<"3rd obj"<<endl;
    obj3.show(); obj3.calc(); obj3.show();
}