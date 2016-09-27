#include <stdio.h>
#include <stdlib.h>

void createLinkedList ();

void insertItemAtTheBegininig ();

void displayValues ();

void insertItemAtNPosition();

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
   //  createLinkedList();
    
    printf("\nenter values in the list");
    char ch;
    do {
        insertItemAtTheBegininig();
        displayValues();
        printf("\nwant to insert another value");
        ch = getchar();
    }
    while (ch !='n');
    return 0;
}

void displayValues () {
    
    struct node *new_nodeForDisplay;
    new_nodeForDisplay = start;
    printf("the list is");
    while (new_nodeForDisplay != NULL) {
        printf("%d -- >", new_nodeForDisplay->data);
        new_nodeForDisplay = new_nodeForDisplay->next;
    }
}

void insertItemAtTheBegininig () {
    
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("\n enter data");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    
    if (start == NULL) {
        start = new_node;
    }
    else {
        new_node->next = start;
        start = new_node;
    }
}

// Mark - Create new LinkedList
// pointer points to nothing first
void createLinkedList () {
    
    char ch;
    struct node *new_node;
    struct node *current_node = NULL;
    do {
        new_node = (struct node*)malloc(sizeof(struct node));
        printf("\n please enter the data");
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        
        if(start == NULL) {
            start = new_node;
            current_node = new_node;
        }
        else {
            current_node->next = new_node;
            current_node = new_node;
        }
        printf("\n want to create another node?:");
        ch = getchar();
    }
    while(ch!='n');
    
    printf("\n the linked list is");
    
    while (start!=NULL) {
        printf("%d -->", start->data);
        start = start->next;
    }
    printf("Null");
    
}