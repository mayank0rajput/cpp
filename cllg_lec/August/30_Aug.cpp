#include <iostream>
using namespace std;

/*int main(){
    int arr[6],i,elem,n;
    cout<<"Enter 5 array element";
    for(i=0;i<5;i++){
    cin>>arr[i];
    }
    
    // for (i=0;i<6;i++){
    //     arr[i+1]=arr[i];
    // }

    cout<<"\n Enter  element to insert";
    cin>>elem;
    
    
    cout<<"which position you want to enter:";
    cin>>n;
    
    arr[n-1]=elem;
    
    
    cout<<"\n the new array is ";
    for (i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}*/
/*
int main(){
    int arr[30],i,elem,pos,tot;
    cout>>"Enter size for array:";
    cin>>tot;
    cout<<"Enter "<<tot<<" array element";
    for(i=0;i<tot;i++)
    cin>>arr[i];
    cout<<"\n Enter element to insert";
    cin>>elem;
    cout<<" at what position";
    cin>>pos;
    for(i=tot;i>=pos;i--)
        arr[i]=arr[i-1];
    arr[i]=elem;
    tot++;
    cout<<
}*/
/*
int main(){
    int x,y;
    cout<<"Enter 2 numbers:";
    cin>>x>>y;
    switch(x==y && x+y>20)    //1 true ,0-false
    {
        case 1:
            cout<<"condition true "<<x+y<<endl;
            break;
        case 0:
            cout<<"condition false "x-y<<endl;
            break;
        default:
        cout<<"invalid value"<<endl;
    }
}*/

int main(){
    char var;
    cout<<"Enter any character ="<<endl;
    cin>>var;


    // if(var>='a'&& var<='z'){    //
    //     cout<<var<<" is an alphabet "<<endl;
    // }
    // else if (var>='A'&& var<='Z'){
    //     cout<<var<<" is an capital alphabet "<<endl;
    // }
    // else if(var>='0' && var<='9'){
    //     cout<<var<<"is a digit"<<endl;
    // }
    // else{
    //     cout<<var<<" is an alphabet "<<endl;
    // }




    switch (var>='a'&& var<='z'||var>='A'&& var<='Z'||var>='0' && var<='9')
    {
    case 1:
        switch (var>='a'&& var<='z'||var>='A'&& var<='Z'){
            case 1:
                cout<<"Alphabet"<<endl;
                break;
            case 0:
                cout<<"digit"<<endl;
                break;
        }
    case 0:
        cout<<"not a alphabet nor digit"<<endl;
        break;
}
}



int main(){
    int x,y,z;
    cout<<"enter values:"<<endl;
    cin>>x>>y>>z;

    if(x+y+z==180){
        cout<<"they can make triangle"<<endl;
    }
    else {
        cout<<"they cant";
    }
}

//write a program to illustrate multiple inheritance in cpp 