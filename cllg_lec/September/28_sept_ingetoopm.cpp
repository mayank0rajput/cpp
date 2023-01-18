#include <iostream>
using namespace std;

class employee{///collection of heterogenus data
    char name[20];
    int empid;
    public:
    void getdata(){
        cout<<"Enter name= ";       gets(name);
        cout<<"Enter empid= ";      cin>>empid;
    }
    void showdata(){
        cout<<"name = "<<name<<endl;
        cout<<"empid = "<<empid<<endl;
    }
};
class record:public employee {///collection of heterogenus data
    int DA,HRA;     float salary;
    public:
    void input(){
        getdata();
        cout<<"Enter DA= ";       cin>>DA;
        cout<<"Enter HRA= ";      cin>>HRA;
        cout<<"Enter salary= ";     cin>>salary;
        
    }
    
    void output(){//ambivity : when name of functions of two class is same
        cout<<"DA = "<<DA<<endl;
        cout<<"HR = "<<HRA<<endl;
        cout<<"Salary = "<<salary<<endl;
        salary=salary+(salary*DA/100)+(salary*HRA/100);
        cout<<"Total salary = "<<salary<<endl;
        showdata();
    }
};

int main(){
    record obj;
 //   obj.getdata();
 //obj.employee::getdata(); // ambitivty is resolved using scope operator
   obj.input(); cout<<endl;
 //   obj.showdata();
    obj.output();
}
