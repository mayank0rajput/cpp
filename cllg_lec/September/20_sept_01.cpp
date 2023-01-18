/*
#include <iostream>
using namespace std;
 

int main(){

    int m,n,p,q,i,j,A[5][5],B[5][5];
    cout<<"enter row and column of matrix A";
    cin>>m>>n;
    cout<<"Enter row and column of matrix B";
    cin>>p>>q;
    
    if ((m!=p)&&(n!=p)){
        cout<<"matrix canot be added. ";
        exit(0);
    }
    cout<<"Enter elements of A.";
    for (i=0;i<m;i++)
    for (j=0;j<n;j++)
    cin>>A[i][j];

    cout<<"Enter elements of B";
    for (i=0;i<p;i++)
    for (j=0;j<q;j++)
    cin>>B[i][j];

    int C[m][n];
    for (i=0;i<m;i++)
    for (j=0;j<n;j++)
    C[i][j]=A[i][j]+B[i][j];

    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout<<C[i][j]<<"    ";
        }
        cout<<endl;
    }

}*/
/* extern is used to declare varible at any place of the code
; is used to terminate a statement*/

