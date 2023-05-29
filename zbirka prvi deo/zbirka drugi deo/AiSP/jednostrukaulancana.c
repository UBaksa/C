// jednolancane liste
/*
#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int data;
    struct node *next;
}NODE;
NODE *first=NULL,*last=NULL,*temp=NULL,*curr=NULL,*prev=NULL,*next=NULL,*prvi,*kraj,*sredina,*brisi,*prethodnik,*zadnji,*odredjena;


int isEmpty(){
    if(first==NULL)return 1;
    return 0;
}



void create(int el){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=el;
    temp->next=NULL;
    if(isEmpty()){
        first=temp;
        last=temp;
    }
    else{
        last->next=temp;
        last=temp;
    }
    
}



struct NODE *reverse(NODE *first)
{   
    curr=first;
    
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}


void display(){
    temp=first;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
}}

int brojac(){
    int b=0;
    temp=first;
    while(temp!=NULL){
        b++;
        temp=temp->next;
    }
    return b;
}
void naPocetak(int brojPocetak){
    prvi=(struct node*)malloc(sizeof(struct node));
        prvi->data=brojPocetak;
        prvi->next=first;
        first=prvi;
}
void naKraj(int brojKraj){
    kraj=(struct node*)malloc(sizeof(struct node));
    kraj->data=brojKraj;
    // kraj->next=NULL;
    last->next=kraj;
    last=kraj;
}
void uSredinu(int brojSredina){
    sredina=(struct node*)malloc(sizeof(struct node));
    int ukupno=brojac();
    int ukupno2=ukupno/2;
   int i;
    if(ukupno%2!=0){
        printf("neparan broj cvorova,ne moze u sredinu ");
    } else{
        temp=first;
        for( i=1;i<=ukupno2-1;i++){
            temp=temp->next;
        }
        sredina->data=brojSredina;
        sredina->next=temp->next;
        temp->next=sredina;
    }
}
void brisiPrvi(){
  temp=first;
  first=first->next;
  free(temp);
}
void brisiSredinu(){
     int ukupno=brojac();
     int ukupno2=ukupno/2;
     sredina=first;
     prethodnik=first;
     for(int i=1;i<ukupno2+1;i++){
         prethodnik=sredina;
         sredina=sredina->next;
     }
     prethodnik->next=sredina->next;
    
     free(sredina);
}
void brisiPoslednji(){
    temp=first;
    zadnji=first;
    while(zadnji->next!=NULL){
        temp=zadnji;
        zadnji=zadnji->next;
    }
    temp->next=NULL;
    zadnji=NULL;
    free(zadnji);
}
void search(int position){
    odredjena=first;
    temp=first;
    for(int i=1;i<position;i++){
        temp=odredjena;
        odredjena=odredjena->next;
    }
    printf("cvor koji ste trazili ima vrednost %d",odredjena->data);
}
void niz(){
    int i=0;
    temp=first;
    int niz[100];
    while(temp!=NULL){
        niz[i]=temp->data;
        temp=temp->next;
        printf("%d",niz[i]);
        i++;
    }

}
void sortiraj(int num_of_nodes){
  
    printf("\n");
    int br1,pom,br2;
    for(int br1=num_of_nodes-2;br1>=0;br1--){
        
        curr=first;
        next=first->next;
        for(int br2=0;br2<=br1;br2++){
            if(curr->data>next->data){
                pom=next->data;
                next->data=curr->data;
                curr->data=pom;
            }
            curr=next;
            next=next->next;
        }
    }
}
int main()
{
    int ukupno;
    create(4);
    create(5);
    create(6);
    create(0);
    create(9);
    // first=reverse(first);
    // display();
  naPocetak(1);
  
  naKraj(8);
//   display();
  ukupno=brojac();
//   uSredinu(7);
//   brisiPrvi();
//   brisiSredinu();
//   brisiPoslednji();
  display();
 search(4);
 niz();
    printf("Ima ukupno %d cvorova",ukupno);
}*/