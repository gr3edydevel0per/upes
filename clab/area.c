#include <stdio.h>
#include <math.h>


int  main(){

 int a,b,c,sp;
 double area;
 printf("Please enter sides of triangle \n");
 scanf("%d%d%d",&a,&b,&c);
 sp=(a+b+c)/2;
 area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
 printf("The area of triangle is %lf \n",area);




}
