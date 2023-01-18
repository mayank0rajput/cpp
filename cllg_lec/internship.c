/*auto:auto is a default storage class for all local variable

resistor:register is use to define local variable 

static:instructs the compiler to keep a local variable in existence during the lifetime 
of the programme instead of creating and destroying it each time it 
comes into and goes out of scope.

extern

to make a constant :-
    #define prepocessor
    const keyword*/
/*
#include <stdio.h>
void func(void);
//function declaration
static count=5;
int main(){
    while(count--){
        func();
    }
    return 0;
}
void func(void){
    static int i=5;
    i++;
    printf("i is %d and count is %d \n",i,count);
}*/
/*
#include <stdio.h>
#define length 50
#define width 5
#define newline '\n'
*/
const int length=50;
const int width=5;
const char newline='\n';

int main(){
    int area;
    area=length*width;
    printf("area: %d ",area);
    printf("%c",newline);
    return 0;
}