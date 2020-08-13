#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *address;
};

int length = 0;

void push(struct node** head_ref,int new_data)
{
    struct node * new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;// * set the data into new node
    new_node->address = (*head_ref);// * assign value of head into new node address member.
    (*head_ref) = new_node;// * move the head to point to the new node.
    length++;
}

void show(struct node *head_ref){
    if(head_ref==NULL){
        printf("List is empty!!!\n");
        return;
    }
    while (head_ref != NULL)
    {
        printf("%d ",head_ref->data);
        head_ref = head_ref->address;
    }
    printf("\n");
}
void printlist(struct node* head_ref){
    if(head_ref->address!=NULL)
        printlist(head_ref->address);
    printf("%d ",head_ref->data);
}
void removeLast(struct node** head_ref)
{
    struct node *temp = (*head_ref)->address;
    *head_ref = temp;
    length--;
}
void del(struct node **head_ref,int key)
{
    int i;
    struct node *temp = *head_ref;
    for(i=1;i<(length)-(key+1);i++)
    {
        temp = temp->address;
    }
    temp->address = temp->address->address;
}
void main()
{
    struct node *LinkedList = NULL;
    show(LinkedList);
    push(&LinkedList,10);//! 0
    push(&LinkedList,20);//! 1
    push(&LinkedList,30);//! 2
    push(&LinkedList,55);//! 3
    push(&LinkedList,101);//! 4
    show(LinkedList);
    del(&LinkedList,3);
    show(LinkedList);
    printlist(LinkedList);
}

