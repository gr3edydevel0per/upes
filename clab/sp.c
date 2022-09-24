#include <stdio.h>

int main(){

 int p,t;
 float rate,interest;
 printf("Please Enter Amount, Rate , Time Period (in years) \n");
 scanf("%d%f%d",&p,&rate,&t);
 printf("\n");
 interest=(p*rate*t)/100;
 printf("%f \n",interest);

}
