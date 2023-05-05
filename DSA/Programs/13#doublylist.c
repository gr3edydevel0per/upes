#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

// Define the doubly linked list structure
struct DoublyLinkedList {
    struct Node *head;
    struct Node *tail;
};

// Create a new node with the given data and return a pointer to it
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Initialize a new doubly linked list
struct DoublyLinkedList* initializeList() {
    struct DoublyLinkedList* list = (struct DoublyLinkedList*)malloc(sizeof(struct DoublyLinkedList));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

// Insert a new node with the given data at the beginning of the doubly linked list
void insertAtBeginning(struct DoublyLinkedList* list, int data) {
    struct Node* newNode = createNode(data);
    if(list->head == NULL) {
        list->head = newNode;
        list->tail = newNode;
        return;
    }
    newNode->next = list->head;
    list->head->prev = newNode;
    list->head = newNode;
}

// Insert a new node with the given data at the end of the doubly linked list
void insertAtEnd(struct DoublyLinkedList* list, int data) {
    struct Node* newNode = createNode(data);
    if(list->tail == NULL) {
        list->head = newNode;
        list->tail = newNode;
        return;
    }
    newNode->prev = list->tail;
    list->tail->next = newNode;
    list->tail = newNode;
}

// Delete the first node of the doubly linked list
void deleteAtBeginning(struct DoublyLinkedList* list) {
    if(list->head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = list->head;
    list->head = list->head->next;
    if(list->head != NULL) {
        list->head->prev = NULL;
    }
    free(temp);
}

// Delete the last node of the doubly linked list
void deleteAtEnd(struct DoublyLinkedList* list) {
    if(list->tail == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = list->tail;
    list->tail = list->tail->prev;
    if(list->tail != NULL) {
        list->tail->next = NULL;
    }
    free(temp);
}

// Traverse and print the doubly linked list from head to tail
void printListForward(struct DoublyLinkedList* list) {
    if(list->head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = list->head;
    printf("Doubly Linked List (Forward): ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Traverse and print the doubly linked list from tail to head
void printListBackward(struct DoublyLinkedList* list) {
    if(list->tail == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = list->tail;
    printf("Doubly Linked List (Backward): ");
    while(temp != NULL) {
        printf("%d ", temp->data);
                temp = temp->prev;
    }
    printf("\n");
}


int main() {
    struct DoublyLinkedList* list = initializeList();

    insertAtBeginning(list, 10);
    insertAtBeginning(list, 20);
    insertAtEnd(list, 30);
    insertAtEnd(list, 40);

    printListForward(list);
    printListBackward(list);

    deleteAtBeginning(list);
    deleteAtEnd(list);

    printListForward(list);

    return 0;
}
