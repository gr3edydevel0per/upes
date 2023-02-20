#include <stdio.h>

void main(){
    int **p2p , *p2Num ,num;
    printf("Please enter the element \n");
    scanf("%d",&num);

    p2Num = &num;
    p2p = &p2Num;
    printf("The value at address %p is %d",*p2p,**p2p);
    
}

