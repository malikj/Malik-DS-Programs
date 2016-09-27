// Delete node at nth Position 

#include <stdio.h>
#include <stdlib.h>

void insert(int x);

void delete(int n);

void displayValues ();

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

int main(int argc, const char * argv[]) {
insert(60);
    insert(77);
    insert(10);
    insert(96);
    displayValues();
    int n;
    
    printf("enter a position to delete");
    scanf("%d",&n);
    delete(n);
    displayValues();

return 0;
}

void insert(int x) {
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = x;
    new_node->next = start;
    start = new_node;
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

void delete(int n) {
struct node *temp1 = start;
    if (n == 1) {
        start = temp1->next;
//        free(temp1);
    }
    else {
        
        for (int i =1 ; i<=n-2; i++) {
            temp1 = temp1->next;
        }
    
        struct node *temp2= temp1->next;
        temp1->next = temp2->next;
//        free(temp2);
        
    }
}