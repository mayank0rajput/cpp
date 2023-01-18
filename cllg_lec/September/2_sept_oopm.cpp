#include <iostream>
using namespace std;

int main(){
    int num[5][3],i,j;
    for (int i=0;i<5;i++){
        for (int j=0;j<3;j++){
            cout<<"Enter value for "<<"["<<i<<"]"<<"["<<j<<"]=";
            cin>>num[i][j];
        }
    }
    // to print array

    for (int i=0;i<5;i++){
        for (int j=0;j<3;j++){
            cout<<num[i][j]<<"  ";
        }cout<<endl;
    }

    int sum=0;
    for (int i=0;i<5;i++){
        for (int j=0;j<3;j++){
            sum=num[i][j]+sum;
        }
    }
    cout<<"sum"<<sum<<endl;
    cout<<"average"<<sum/15;
    
}


calcualte sum of row value