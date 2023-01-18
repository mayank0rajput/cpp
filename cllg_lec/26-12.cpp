#include <iostream>
#include <stack>
using namespace std;

void showstack(stack<int>p){
    while(!p.empty()){
        cout<<p.top()<<"   ";
        p.pop();
    }
}

int main(){
    stack<int>s1,s2;
    // s1.push(1);
    // s1.push(5);
    // s1.push(8);
    // s1.push(9);
    // cout<<"Elements of stack= "<<s1.top()<<endl;
    // s1.pop();
    // cout<<"Elements of stack= "<<s1.top()<<endl;
    // s1.pop();
    // cout<<"Elements of stack= "<<s1.top()<<endl;
    // s1.pop();
    // cout<<"Elements of stack= "<<s1.top()<<endl;
    // s1.pop();
    // return 0;
    for (int i=0;i<8;i++){
        s1.push(i*2);
        s2.push(i+5);
    }
    //swap(s1,s2); 
    /*
    cout<<"Elements of stacks = ";
    for (int i = 0; i < 8; i++)
    {
        cout<<s1.top()<<"   ";
        s1.pop();
    }cout<<"    ";*/
    cout<<"Elements of stacks = ";      showstack(s1);
    cout<<"Elements of stacks = ";      showstack(s2);
    

}

/* elements are given in order are to be given in template then reverse them without using stack*/