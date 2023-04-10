#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
} *front = NULL, *rear = NULL,*temp;

void queue(struct ListNode *temp) {
    printf("Please enter the data: ");
    scanf("%d", &(temp->data));
    if (rear == NULL) {
        front = temp;
        rear = temp;
        temp->next = NULL;
    } else {
        rear->next = temp;
        temp->next = NULL;
        rear = temp;
    }
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty.\n");
    } else if (front == rear) {
        front = NULL;
        rear = NULL;
    } else {
        front = front->next;
    }
}

void display(){
    temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main() {
    struct ListNode *temp = (struct ListNode*) malloc(sizeof(struct ListNode));
    queue(temp);
    display();
    dequeue();
    printf("Deleted");
    display();
    return 0;
}
