#include <iostream>
using namespace std;

class Reactangle{
    public :
    float len,wdt;
    void getVal(){
        cout<<"Enter length:"<<endl;
        cin>>len;
        cout<<"Enter width:"<<endl;
        cin>>wdt;
    }
    void show(){
        cout<<"Area of Reactangle is "<<(len*wdt)<<endl;
    }
};

class Square{
    public :
    float side;
    void getVal(){
        cout<<"Enter side :"<<endl;
        cin>>side;
    }
    void show(){
        cout<<"Area of Square is "<<(side*side)<<endl;
    }
};


class Triangle{
    public :
    float ht,bs;
    void getVal(){
        cout<<"Enter height:"<<endl;
        cin>>ht;
        cout<<"Enter base:"<<endl;
        cin>>bs;
    }
    void show(){
        cout<<"Area of Triangle is "<<(ht*bs)/2<<endl;
    }
};


class Circle{
    public :
    float rad;
    void getVal(){
        cout<<"Enter radius:"<<endl;
        cin>>rad;
    }
    void show(){
        cout<<"Area of Circle is "<<(3.141*rad*rad)<<endl;
    }
};

// 24_august_homework_oopm_lab


int main(){
    while(true){
        cout<<"1: To calculate area of rectangle.\n";
        cout<<"2: To calculate area of square.\n";
        cout<<"3: To calculate area of triangle.\n";
        cout<<"4: To calculate area of circle.\n";
        cout<<"Press any option:";
        int n;
        cin>>n;
        switch (n)
        {
        case 1:
        Reactangle rect;
        rect.getVal();
        rect.show();
        break;    
        case 2:
        Square sq;
        sq.getVal();
        sq.show();
        break;

        case 3:
        Triangle tri1;
        tri1.getVal();
        tri1.show();
        break;

        case 4:
        Circle cir;
        cir.getVal();
        cir.show();
        break;

        default:
        cout<<"You have not Entered valid option. Radhe Radhe....";
        break;
        }
    };
    return 0;
    
}