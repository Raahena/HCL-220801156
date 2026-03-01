// //A railway system manages compartments dynamically.
// Each node represents a compartment with seat count.
// Implement:
// Add a compartment at the front or end.
// Remove a compartment from any position.
// Display compartments forward and backward.
// Demonstrate with at least 4 compartments.
#include <stdio.h>
#include <stdlib.h>

struct Compartment
{
    int seats;
    struct Compartment *prev;
    struct Compartment *next;
};

struct Compartment *head = NULL;


// Add at front
void addFront(int seats)
{
    struct Compartment *newNode = malloc(sizeof(struct Compartment));

    newNode->seats = seats;
    newNode->prev = NULL;
    newNode->next = head;

    if(head != NULL)
        head->prev = newNode;

    head = newNode;

    printf("Added at front: %d seats\n", seats);
}


// Add at end
void addEnd(int seats)
{
    struct Compartment *newNode = malloc(sizeof(struct Compartment));

    newNode->seats = seats;
    newNode->next = NULL;

    if(head == NULL)
    {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    struct Compartment *temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    printf("Added at end: %d seats\n", seats);
}



// Remove at position
void removePosition(int pos)
{
    if(head == NULL)
    {
        printf("List empty\n");
        return;
    }

    struct Compartment *temp = head;

    for(int i=1; i<pos; i++)
    {
        temp = temp->next;

        if(temp == NULL)
        {
            printf("Invalid position\n");
            return;
        }
    }

    printf("Removed compartment with %d seats\n", temp->seats);

    if(temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
}



// Display forward
void displayForward()
{
    struct Compartment *temp = head;

    printf("\nForward: ");

    while(temp != NULL)
    {
        printf("%d ", temp->seats);
        temp = temp->next;
    }
}



// Display backward
void displayBackward()
{
    struct Compartment *temp = head;

    if(temp == NULL)
        return;

    while(temp->next != NULL)
        temp = temp->next;

    printf("\nBackward: ");

    while(temp != NULL)
    {
        printf("%d ", temp->seats);
        temp = temp->prev;
    }
}



int main()
{
    addFront(50);
    addFront(40);

    addEnd(60);
    addEnd(70);


    displayForward();
    displayBackward();


    removePosition(2);


    displayForward();
    displayBackward();


    return 0;
}