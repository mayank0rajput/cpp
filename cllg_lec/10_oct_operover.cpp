#include <iostream>
using namespace std;

class sample{
    int x,y;
    public :
    void getdata(){
        cout<<"Enter value of x="; cin>>x;
        cout<<"Enter value of y="; cin>>y;

    } 
    void display(){
        cout<<"x="<<x<<ends<<"y="<<y<<endl;
    }

    friend sample operator+(sample obj1,sample obj2);/*{   //binary operator overloding 
        sample temp;
        temp.x=x+obj.x;
        temp.y=y+obj.y;
        return temp;
    }*/
};

sample operator +(sample obj1, sample obj2){   //define outside of class binary operator overloding 
        sample temp;
        temp.x=obj1.x+obj2.x;
        temp.y=obj1.y+obj2.y;
        return temp;
    }

int main(){
    sample s1,s2,s3;
    cout<<"Data for obj 1 "<<endl;
    s1.getdata();
    cout<<"Data for obj2 "<<endl;
    s2.getdata();
    s3=s1+s2;       //return temp objectand assign to obj 3
    cout<<endl<<"object 1 data "<<endl;     s1.display();
    cout<<endl<<"object 2 data "<<endl;     s2.display();
    cout<<endl<<"object 3 data "<<endl;     s3.display();
}
