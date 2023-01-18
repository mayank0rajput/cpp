
#include <iostream>
//using namespace std;

int a=29;
int main(){
    int a=5,b=5,c;
    std::cout<<"a= "<<a<<std::endl;
    {
        int a=3;
        std::cout<<"a="<<a<<std::endl;
    }
    a=7;
    //reassignment of variable 
    std::cout<<"a= "<<a<<std::endl;
    {
        std::cout<<"a= "<<a<<std::endl;
    }
   // cout<<"a= "<<::a<<endl;

    
//     c=(a==b?23:48);
//if logic is true then value at the left side of the colon will be assigned and if the logic is 
//false then value at the right will be assigned.
//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;
//     cout<<"c="<<c<<endl;

}



#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter value of x "<<endl;
    cin>>x;
    x+=30;
    cout<<"Value of x = "<<x<<endl;
    //cout<<((x==35)&&(x<100))<<endl;
   
    if (x<0){
        cout<<"x is neagative"<<endl;
    }
    else if (x>0){
        cout<<"x is positive"<<endl;
    }
    else
    {
        cout<<"x is 0."<<endl;
    }
    
}
