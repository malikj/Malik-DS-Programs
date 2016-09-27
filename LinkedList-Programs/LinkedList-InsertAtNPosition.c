// Insert node at nth Position 

#include <stdio.h>
#include <stdlib.h>

void insertItemAtNPosition();


int main(int argc, const char * argv[]) {
    // insert code here...
    
   //  createLinkedList();
    
    printf("\nenter values in the list");
    char ch;
    do {
        insertItemAtNPosition();
        displayValues();
        printf("\nwant to insert another value");
        ch = getchar();
    }
    while (ch !='n');
    return 0;
}

void insertItemAtNPosition() {
    struct node *new_node;
    int n, i;
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("\n enter data");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    printf("/n enter the position");
    scanf("%d",&n);
    if (n == 1) {
        new_node->next = start;
        start = new_node;
    }
    else {
        
        struct node *temp = start;
        
        for (i = 1; i<n-1; i++) {
            temp =  temp->next;
        }
        
        new_node->next = temp->next;
        temp->next = new_node;
    }
}
