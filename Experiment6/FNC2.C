#include <stdio.h>


int triangle_area(int,int);
void swap(int*,int*);
float *rem(int*, int*);

int main(){
    int at,a,b;
    printf("Please enter the numbers to perform operations :\n ");
    scanf("%d%d",&a,&b);
    at= triangle_area(a,b);
    printf("The area of triangle is %d\n",at);
    swap(&a,&b);
    printf("The numebrs after swapping are a is %d and b is %d\n",a,b);
    printf("The remainder of given numebrs is %d",rem(&a,&b));

    
}


int triangle_area(int base,int height){
    
    int area;
    area=(base*height)/2;
    return area;
}
void swap(int *x , int *y){
    
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

float *rem(int *x,int *y){
    return (*x) % (*y);
}
