#include <iostream>
using namespace std;
class student{
    int rollno,marks[5];
    string name;
    public:
        friend istream &operator>>(istream &in , student &obj){
            cout<<"Enter roll no:";
            cin>>obj.rollno;
            cout<<"Enter name :";
            cin>>obj.name;
            for (int i =0;i<5;i++){
            cout<<"Enter marks of subject "<<i+1<<": ";
            cin>>obj.marks[i];
            }
            return in;
        }

        friend ostream &operator<<(ostream &out , student &obj){
            cout<<"Roll no. is "<<obj.rollno<<endl;
            cout<<"Name is "<<obj.name<<endl;
            for (int i =0;i<5;i++){
            cout<<"Marks of subject "<<i+1<<" is :";
            cout<<obj.marks[i]<<endl;
            }  
            return out;          
        }    

};

int main(){
    student obj1;
   // cout<<"Enter values ";
    cin>>obj1;
    cout<<obj1;
    return 0;

}
