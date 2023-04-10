#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

void display(struct ListNode *head);
void push(struct ListNode **head);
void pop(struct ListNode **head);
void seek(struct ListNode *head);

int main() {
    struct ListNode *head = NULL;
    push(&head);
    display(head);
    pop(&head);
    display(head);
    seek(head);
    return 0;
}

void push(struct ListNode **head) {
    int num;
    printf("Please enter the data to push into stack : ");
    scanf("%d", &num);
    struct ListNode *temp = (struct ListNode*) malloc(sizeof(struct ListNode));
    temp->data = num;
    temp->next = *head;
    *head = temp;
}

void pop(struct ListNode **head) {
    if (*head == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    struct ListNode *temp = *head;
    *head = (*head)->next;
    free(temp);
}

void display(struct ListNode *head) {
    if (head == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void seek(struct ListNode *head) {
    if (head == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Top element: %d\n", head->data);
}
