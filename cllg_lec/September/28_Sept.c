/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    char *mem_alloc;
    //memory allocated dynamically
    mem_alloc = calloc( 15, sizeof(char) );

    if( mem_alloc== NULL )
    {
        printf("Couldn't able to allocate requested memory\n");
    }
    else
    {
        strcpy( mem_alloc,"w3schools.in");
    }

    printf("Dynamically allocated memory content : %s\n", mem_alloc );
    free(mem_alloc);
}

#include<stdio.h>
#include<string.h>

union Courses
{
    char  WebSite[50];
    char  Subject[50];
    int   Price;
};

void main( )
{
    union Courses C;

    // Initialization
    strcpy( C.WebSite, "w3schools.in"); 
    printf( "WebSite : %s\n", C.WebSite);
    strcpy( C.Subject, "The C Programming Language"); 
    printf( "Book Author : %s\n", C.Subject);
    C.Price = 0;

    // Print
   
    
    printf( "Book Price : %d\n", C.Price);
}*/

#include <stdio.h>
#include <conio.h>
typedef struct professor{
    char p_name[50];
    int p_sal;
}prof;

void main(void){
    prof pf;
    printf("\n Enter proffessor detail:\n\n");
    printf("\n Enter professor name: \t");
    scanf("%s",pf.p_name);
    printf("\n ")
}
