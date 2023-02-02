#include <stdio.h>
#include <stdlib.h>

typedef struct node{
   int num;
   struct node *nextNode;
} node;


// Function to create linked list and return the head address
node *createLinkedList(int);
void displayList(node);

int main(){
  int nodes;
  node *head;
  printf("Please enter the number of Nodes\n");
  scanf("%d",&nodes);
  head = createLinkedList(nodes);
  displayList(*head);
}


node *createLinkedList(int nodes){
   node *head ,*fnNode, *temp;
   int num;
   head = (node*)malloc(sizeof(node));
   if (head ==NULL){
    printf("No memory Allocated ");
   }
   else{
    printf("Input data for first Node \n");
    scanf("%d",&num);
    head->num= num;
    head->nextNode =NULL; //for now terminating node with NULL i.e. Our linked list contain only one node i.e. Head
    temp=head;
    // Creating Other nodes for the linked list . this will create n-1 nodes as 1 node is created above and w'll
    // start the loop from 2 to n 
    for(int i=2; i<=nodes; i++){
     fnNode = (node*)malloc(sizeof(node));
     if (fnNode==NULL){
        printf("Memory Not allocated \n");
     }
     else{
        printf("Enter input for %d node",i);
        scanf("%d",&num);
        fnNode->num=num;
        fnNode->nextNode = NULL; 
       
        temp->nextNode = fnNode;    // linking previous node with new node
        temp = temp->nextNode;     // changing the temp to new node
     }
    }
   }
return head;
}



void displayList(node head){
    node *temp;
    temp=&head;
    if (temp==NULL){
        printf("Not a valid head address | Linked List can be displayed \n");
    }
    else{
        
        printf("Data in linked list is");
        while(temp!=NULL){
            printf("%d=>",temp->num);
            temp= temp->nextNode;
        }
        if(temp==NULL)
           printf("NULL");
    }
}