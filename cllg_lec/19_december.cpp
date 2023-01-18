#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){/*
    array<int,4>num={5,8,4};
    cout<<"Access array element using index position[]"<<endl;
    cout<<num[0]<<"    "<<num[1]<<"   "<<num[2]<<"   "<<num[3]<<endl;
    cout<<"Access array using .at() "<<endl;
    cout<<num.at(0)<<"   "<<num.at(1)<<"    "<<num.at(2)<<"     "<<num.at(3)<<endl;
    cout<<"using for loop ="<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<num[i]<<"     ";
    }cout<<endl;

    cout<<"Front Element = "<<num.front()<<endl;
    cout<<"Back Element = "<<num.back()<<endl;

    return 0;

    array<int,4>num1={5,8,4,9};
    array<int,4>num2={15,80,40,90};
    cout<<"element of num1 = "; 
    for (int i = 0; i < 4; i++)
    {
         code 
        cout<<num1[i]<<"     ";
    }cout<<endl;
    //sort(num.begin(),num.end());
    num.fill(100);
    cout<<"after fill function  = ";
     for (int i = 0; i < 4; i++)
    {
         code 
        cout<<num[i]<<"     ";
    }
*/  
    array<char,6>var1;
    array<char,6>var2;
    cout<<"Enter values of var1:";
    for (int i = 0; i < 6; i++)
    {
        cin>>var1[i];
    }

    cout<<"Enter values of var2:";
    for (int i = 0; i < 6; i++)
    {
        cin>>var2[i];
    }    
    cout<<"Var 1 :- ";
    for (int i = 0; i < 6; i++)
    {
        cout<<var1[i];
    }cout<<endl;

    cout<<"Var 2 :- ";
    for (int i = 0; i < 6; i++)
    {
        cout<<var2[i];
    }cout<<endl;

    cout<<"After swapping"<<endl;
    var1.swap(var2);

    cout<<"Var 1 :- ";
    for (int i = 0; i < 6; i++)
    {
        cout<<var1[i];
    }cout<<endl;

    cout<<"Var 2 :- ";
    for (int i = 0; i < 6; i++)
    {
        cout<<var2[i];
    }cout<<endl;
  

}

// 6 char - var1,6 char var2