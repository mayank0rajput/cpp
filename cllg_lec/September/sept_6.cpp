#include <iostream>
using namespace std;
/*
int main(){
    int i =0;
    while(i<10){
        if(i==5) break;
        cout<<i<<endl;
        i++;
    }
}
    int main(){
    int i=0;
    l1: cout<<"program 1 terminated"<<endl;
    while(i<10){
        cout<<"i="<<i<<endl;
        i++;
        if(i==5){goto l1;} // goto statement
        
    }
}*/

/*
void sum(int x,int y){// two argument funvtion
    cout<<"a+b="<<(x+y)<<endl;
}

void sum(){// two argument funvtion
    
    cout<<"a+b="<<34+56<<endl;
}

int main(){
    sum(34,56);
    cout<<"program terminated"<<endl;
}
*/
/* two or more function having same name but they differ in number of argument is called function overloding*/

// void display(){
//     cout<<"0 argument function"<<endl;
// }
// void display(int x){
//     cout<<"1 argument function"<<endl;
// }
// void display(int x,int y){
//     cout<<"2 argument function"<<endl;
// }
// void display(int y,int x,int z){
//     cout<<"3 argument function"<<endl;
// }
// int main(){
//     display(23,'a');

// }



void display(){
    cout<<"0 argument function"<<endl;
}
void display(int x,char a){
    cout<<"1 argument int function"<<endl;
}
void display(int x,int y){
    cout<<"2 argument function"<<endl;
}
void display(int y,int x,int z){
    cout<<"3 argument function"<<endl;
}


int main(){
    display(23,'a');

}