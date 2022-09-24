#include <stdio.h>

int main(){

  int my_array[20],a,i=0,j;
  while (1){
  scanf("%d",&a);
  if (a<0){
   break;
}else{my_array[i]=a;i++;}
}

  for(j=0;j<sizeof(my_array);j++){
   printf("%d",my_array[j]);}
}
