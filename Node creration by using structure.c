include<stdio.h>
#include<stdlib.h>
//Node creation by using structure
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
int main(){
    head=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=NULL;
    printf("node data is %d \n",head->data);
    
}
