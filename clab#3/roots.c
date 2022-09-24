#include <stdio.h>
#include <math.h>
int main() {
 int a,b,c;
 float  d,root1,root2;
 printf("Plese enter the constants (a,b,c) : \n");
 scanf("%d%d%d",&a,&b,&c);
 printf("General form of quadratic equation is ax^2+bx+c \n");
 d = b*b-4*a*c;
 if (d<0){
  printf("Given Quadratic equation have Imaginary Root \n");
}
else{
  root1= b+sqrt(d)/(2*a);
 root2=b-sqrt(d)/(2*a);
 printf("Roots of given equation are %f | %f \n",root1,root2);
}

}
