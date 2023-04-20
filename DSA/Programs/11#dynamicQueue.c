#include <stdio.h>
#include <stdlib.h>

struct link

{

    int info;

    struct link *next;

} *front, *rear;

void insert_q(int no);

int delete_q();

void display();

int main()

{

    int ch, no;

    rear = NULL;

    front = NULL;

    while (1)

    {

        printf("\n Dynamic Queue Menu");

        printf("\n 1->Insert ");

        printf("\n 2->Delete ");

        printf("\n 3->Display");

        printf("\n 4->Exit   ");

        printf("\n enter your choice :  ");

        scanf("%d", &ch);

        switch (ch)

        {

        case 1:

        {

            printf("Enter The Element Value\n");

            scanf("%d", &no);

            insert_q(no);

            printf("\n queue after insertion");

            display();

            break;
        }

        case 2:

        {

            no = delete_q();

            printf("\n The deleted element = %d", no);

            printf("\n queue after deletion");

            display();

            break;
        }

        case 3:

        {

            printf("\n Queue is as follow");

            display();

            break;
        }

        case 4:

        {

            printf("Exit....!!!!");


            exit(0);

            break;
        }

        default:

            printf("\n Wrong choice...!!!! ");
        }
    }
}

void insert_q(int no)

{

    struct link *new1;

    new1 = (struct link *)malloc(sizeof(struct link));

    new1->info = no;

    new1->next = NULL;

    if (rear == NULL || front == NULL)

    {

        front = new1;
    }

    else

    {

        rear->next = new1;
    }

    rear = new1;
}

int delete_q()

{

    struct link *t;

    int no;

    if (front == NULL || rear == NULL)

    {

        printf("\n queue is Under Flow");

        

        return -1;
    }

    else

    {

        t = front;

        no = t->info;

        front = front->next;

        free(t);
    }

    return (no);
}

void display()

{

    struct link *t;

    t = front;

    if (front == NULL || rear == NULL)

    {

        printf("\nQueue is empty");

        exit(0);
    }

    while (t != NULL)

    {

        printf("\n %d", t->info);

        t = t->next;
    }
}
