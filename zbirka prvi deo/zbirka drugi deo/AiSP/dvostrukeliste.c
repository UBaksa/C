#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//osnovno kreiranje dvostruke ulancane liste!
typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}NODE;
NODE *head=NULL,*temp=NULL;

// 1. Write a program in C to create and display a doubly linked list.
void display(){
    temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
NODE* New(int el){
    NODE*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=el;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}
//mora da se kreira u for petlju pa da se doda ispred sa ovom ispod funkcijom!
void addFront(int el){
    temp=New(el);
    if(!head){
        head=temp;
    }
    else {
        head->prev=temp;
        temp->next=head;
        head=temp;
    }
}
// 3. Write a program in C to insert a node at the beginning of a doubly linked list
void addFront(int el){
    temp=New(el);
    if(!head){
        head=temp;
    }
    else {
        head->prev=temp;
        temp->next=head;
        head=temp;
    }
}
main(){
    int i,n,elem;
    printf("Unesite koliko cvorova zelite\n");
    scanf("%d",&n);
    printf("\nIspod unesite vrednosti za cvorove!");
    printf("\n");
    for(i=1;i<=n;i++){
        printf("Unesite vrednost za %d cvor",i);
        scanf("%d",&elem);
        addFront(elem);
    }
    printf("Unesene vrednosti za cvor,prikaz ispod:\n");
    display();
    addFront(32);
    display();
    return 0;
}