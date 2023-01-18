#include <iostream>
using namespace std;
// object delegation or container class
class date{
    int dd,mm,yy;
    public:
        void getDate(){
            while(true){
            cout<<"Enter day= "; cin>>dd;
            cout<<"Enter month= "; cin>>mm;
            cout<<"Enter year= "; cin>>yy;

            if ((dd>=1 && dd<=31) && (mm>=1 && mm<=12) && (yy>=0001 && yy<=2022)){
                cout<<"you entered correct"<<endl;
                break;
            }
            else{
                cout<<"you entered wrong"<<endl;
                // getDate();
            }
        }
        }

        void showDate(){
            cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
        }
};

/*
class person{
    char name[20];
    int mobile;
   // date dob;

    public :
        date dob;
        void input(){
            cout<<"Enter Name:"; cin>>name;
            cout<<"Enter Mobile:"; cin>>mobile;
           // dob.getDate();
        }
        void output(){
            cout<<"Name : "<<name<<" Mobile : "<<mobile<<endl;
          //  dob.showDate();
        }
};*/

int main(){
    date dob;
    dob.getDate();
    dob.showDate();

    // person obj;
    // // dob.getDate();  // dot . is member access operator
    // // dob.showDate();
    // obj.dob.getDate();
    // obj.dob.showDate();
    // obj.input();
    // obj.output();
    
    
}

// user enter value 69 as mm=14 yy=2029