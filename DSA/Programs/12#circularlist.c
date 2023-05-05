#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node
{
    int data;
    struct Node *next;
};

// Define the circular linked list structure
struct CircularLinkedList
{
    struct Node *head;
};

// Create a new node with the given data and return a pointer to it
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Initialize a new circular linked list
struct CircularLinkedList *initializeList()
{
    struct CircularLinkedList *list = (struct CircularLinkedList *)malloc(sizeof(struct CircularLinkedList));
    list->head = NULL;
    return list;
}

// Insert a new node with the given data at the beginning of the circular linked list
void insertAtBeginning(struct CircularLinkedList *list, int data)
{
    struct Node *newNode = createNode(data);
    if (list->head == NULL)
    {
        list->head = newNode;
        newNode->next = newNode;
        return;
    }
    struct Node *temp = list->head;
    while (temp->next != list->head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = list->head;
    list->head = newNode;
}

// Insert a new node with the given data at the end of the circular linked list
void insertAtEnd(struct CircularLinkedList *list, int data)
{
    struct Node *newNode = createNode(data);
    if (list->head == NULL)
    {
        list->head = newNode;
        newNode->next = newNode;
        return;
    }
    struct Node *temp = list->head;
    while (temp->next != list->head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = list->head;
}

// Delete the first node of the circular linked list
void deleteAtBeginning(struct CircularLinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if (list->head->next == list->head)
    {
        free(list->head);
        list->head = NULL;
        return;
    }
    struct Node *temp = list->head;
    while (temp->next != list->head)
    {
        temp = temp->next;
    }
    temp->next = list->head->next;
    free(list->head);
    list->head = temp->next;
}

// Delete the last node of the circular linked list
void deleteAtEnd(struct CircularLinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if (list->head->next == list->head)
    {
        free(list->head);
        list->head = NULL;
        return;
    }
    struct Node *temp = list->head;
    while (temp->next->next != list->head)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = list->head;
}

// Traverse and print the circular linked list
void printList(struct CircularLinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = list->head;
    printf("Circular Linked List: ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != list->head);
    printf("\n");
}

// Test the circular linked list
int main()
{
    struct CircularLinkedList *list = initializeList();

    insertAtBeginning(list, 10);
    insertAtBeginning(list, 20);
    insertAtEnd(list, 30);
    insertAtEnd(list, 40);

    printList(list);

    deleteAtBeginning(list);
    deleteAtEnd(list);

    printList(list);

    return 0;
}
