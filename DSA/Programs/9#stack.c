#include <stdio.h>
#define MAX_LEN 100
int stack[MAX_LEN],choice,n,top,x,i;




void push(void);
void pop(void);
void display(void);



int main(){

top=-1;    
    
    printf("+++++++++++++++++++++++++++++++++++++");
    printf("Enter the size of stack[MAX=100] : ");
    scanf("%d",&n);
    printf("\n Stack Operations using Array\n");
    printf("+++++++++++++++++++++++++++++++++++++");
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
    do {
     printf("\nEnter Choice");
     scanf("%d",&choice);
     switch(choice){
      case 1:{
        push()
        break;
      }
     case 2:{
        pop();
        break;
     }
     case 3:{
        display();
        break;
     }
     case 4:{
        printf("\nExiting...");
        break;
     }
     default:{
        printf("Enter valid choice")
     }
     }

    }
      while (choice!=4);
    }





void pop()
{
   if (top<=-1){
    printf("\nStack is underflow");
   }
   else{
    printf("The popper element is %d",stack[top]);
    top--;
   }
}

void display(){
   if (top>=0)
   {
    for(i=top;i>=0;i--){
        printf("%d    ",stack[i]);
    }
  else{
    printf("Stack is Empty");
  }

   }
}


void push(){
    if (top>=n-1){
        printf("\n Stack is overflow");
    }
    else{
        printf("Enter a value to be pushed");
        scanf("%d",&x);
        top++;
        stack[top]=x ;
               }
}