//dvostruko ulancana lista

/*
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}NODE;
NODE *head=NULL,*temp=NULL;

NODE* New(int el){
    NODE*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=el;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}
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

void addBack(int el){
        NODE*pom=New(el);
        if(!head)head=pom;
        else{
            temp=head;
        while(temp->next){
            temp=temp->next;
        }temp->next=pom;
        pom->prev=temp;
        }
}

void addOnPos(int el,int br){
    if(br==1){
        addFront(el);
    }
    else{
        NODE*pom=New(el);
    temp=head;
    int pos=1;
    while(1){
        if(pos==br-1)break;
        temp=temp->next;
        pos++;
    }
    if(temp->next==NULL){
        addBack(el);
    }else{
    NODE*next=temp->next;
    pom->next=temp->next;
    temp->next=pom;
    pom->prev=temp;
    next->prev=pom;}
    }
}

void deleteOnStart(){
    temp=head;
    if(!head)return;
    head=head->next;
    head->prev=NULL;
    free(temp);
}
void deleteOnEnd(){
    temp=head;
    if(!head)return;
    while(temp->next)temp=temp->next;
    NODE*prev=temp->prev;
    prev->next=NULL;
    free(prev->next);
}

void deleteOnPos(int pos){
    if(pos==1)deleteOnStart();
    else{
        int br=1;
        temp=head;
        while(br==pos-1){
            temp=temp->next;
            br++;
        }
        if(temp->next==NULL)deleteOnEnd();
        else{
            NODE*prev=NULL,*next=NULL;
            prev=temp->prev;
            next=temp->next;
            prev->next=temp->next;
            next->prev=temp->prev;
            free(temp);
        }
    }
}
void display(){
    temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
addBack(1);
addBack(2);
addBack(3);
addOnPos(4,4);
// deleteOnStart();
// deleteOnEnd();
deleteOnPos(2);
display();
return 0;
}*/