#include <stdio.h>
#include <stdlib.h>


typedef struct ListNode{
    int num;
    struct ListNode *next;

}ListNode;



ListNode *createList(int);
void displayList(ListNode*);

int main(){
 int num;
 ListNode *head;
 printf("Please enter the number of nodes in the linked list");
 scanf("%d",&num);
 head = createList(num);
displayList(head);
}

ListNode *createList(int nodeNum){

   ListNode *node1,*temp,*nextNode;

   int num;
   node1 = (ListNode*)malloc(sizeof(ListNode));
   printf("Data for 1st node :");
   scanf("%d",&num);
   node1->num=num;
   node1->next=  NULL;
   temp=node1;
   for(int i=2;i<=nodeNum;i++){
       nextNode= (ListNode*)malloc(sizeof(ListNode));
       printf("Data for %d node :",i);
       scanf("%d",&num);
       nextNode->num=num;
       nextNode->next=NULL;
       
       temp->next= nextNode;
       temp= temp->next;
   }
   return node1;
}

 void displayList(ListNode *head){
     ListNode *temp;
     temp=head;
     while(1){
         if(temp==NULL){
             printf("-:");
             break;
         }
         printf("%d",temp->num);
         temp=temp->next;
         printf("->");
     }
 }

