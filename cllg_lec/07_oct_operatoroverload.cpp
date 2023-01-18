/*#include <iostream>
using namespace std;

class sample{
    int x,y;
    public :
    void getdata(int a,int b){
        x=a;y=b;
    }
    void show (){
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
    void operator -(){      // operator 
        x=-x;
        y=-y;
    }
};

int main(){
    sample obj;
    cout<<"Before overloding "<<endl;
    obj.getdata(23,51);
    obj.show();
    -obj;
    cout<<"After operator overloding"<<endl;
    obj.show();
}*/


#include <iostream>
using namespace std;

class sample{
    int x,y;
    public :
    void getdata(int a,int b){
        x=a;y=b;
    }
    void show (){
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
    friend void operator --(sample &s1);
};
    void operator--(sample &s1)
    {      // operator 
        --s1.x;
        --s1.y;    }


int main(){
    sample obj;
    cout<<"Before overloding "<<endl;
    obj.getdata(23,51);
    obj.show();
    --obj;
    cout<<"After operator overloding"<<endl;
    obj.show();
}