#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter any number"<<endl;
    cin>>x;
    for(int i=1;i<=11;i++){
        if ((i*x)%2==0){
            if (i*x==40){
                continue;
                
            }
            cout<<x<<"*"<<i<<"="<<x*i<<endl;
        }
        
    }
}