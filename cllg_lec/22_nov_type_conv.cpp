/*#include <iostream>
using namespace std;

class sample{
    int x,y;
    public :
        sample(){
            x=0;
            y=0;    // 0 arg constructor
        }
        sample(int p){
            x=p;
            y=p+10;
        }
        operator int (){
            return x;
        } 
        void display(){
            cout<<"x = "<<x<<endl; 
        }
};

int main(){
    int num;
    sample obj1,obj2;
    cout<<"object 1 data "<<endl;
    obj1.display();
    obj2=30;    // user defined data type = int 
    cout<<"object 2 data "<<endl;
    obj2.display();
    num = obj2;     //built in data type =obj
    cout<<"num = "<<num;

    return 0;
}*/


#include <iostream>
using namespace std;

class sample{
    int x;
    public :
        sample (){
            x = 0;  //0 arg constructor 
        }
        sample (int p){
            x = p;
        }
        void display (){
            cout<<"x = "<<x<<endl;
            //cout<<"Equivalent grams = "<<x*1000<<endl;
        }
};

class record {
    int y ;
    public :
        record (){ y=0;}
        record (int q ){
            y=q;
        }
        operator sample (){
            return y;
        }

        void display (){cout<<"y = "<<y<<endl;}
};

int main(){
    sample obj1;    record obj2;
    cout<<"Object 1 data "<<endl;
    obj1.display();
    cout<<"Object 2 data "<<endl;
    obj2.display();
    obj2 = 50;  obj2.display();
    obj1=obj2;
    cout<<"updated value of obj1 ";     obj1.display();      
}