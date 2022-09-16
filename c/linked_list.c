#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int age;
    struct node* next;
}

print(struct node* n)
{
    while(n!=NULL)
    {
        printf("%d\n", n->age);
        n = n->next;
    }
}

int main(void)
{
    struct node* a = NULL;
    a = (struct node*)malloc(sizeof(struct node*));
    struct node* b = NULL;
    b = (struct node*)malloc(sizeof(struct node*));
    struct node* c = NULL;
    c = (struct node*)malloc(sizeof(struct node*));
    a->next = b;
    b->next = c;
    a->age = 16;
    b->age = 17;
    c->age = 18;

    print(a);
}
