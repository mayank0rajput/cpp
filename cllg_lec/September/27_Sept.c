#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main(){
    /*
    char str1[12]="Hello";
    char str2[12]="World";
    char str3[12]; int len;

    strcpy(str3,str1);
    printf("strcpy(str3,str1):%s \n",str3);

    strcat(str1,str2);
    printf("strcat(str1,str2): %s \n", str1);

    len=strlen(str1);
    printf("strlen(str1):%d \n",len);
    return 0;*/

    char *mem_alloc;

    mem_alloc=malloc(15 * sizeof(char));
    if (mem_alloc==NULL){
        printf("Couldn't able to allow \n");
    }
    else {
        strcpy(mem_alloc,"w3 schools \n");

    }
    printf("dynamically alloted memory is %s \n",mem_alloc);
    free(mem_alloc);


}

/*memory allocation
1. code
2. local & global variable
3. static 
4. heap*/