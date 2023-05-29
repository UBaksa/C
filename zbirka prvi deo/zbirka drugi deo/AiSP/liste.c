#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// 1. Write a program in C to create and display a Singly Linked List.

// struct node{
//     int data;
//     struct node *next;
// };

// // void kreirajlistu(int duzina){
// //     int i,elem;
// //     NODE *temp,*first,*pom;
// //     first=(struct node*)malloc(sizeof(struct node));
// //     if(first == NULL){
// //         printf("Ne moze se locirati memorija!");
// //     }
// //     else{
// //         printf("Unesite datu za prvi cvor");
// //         scanf("%d",&elem);
// //         temp->data=elem;
// //         temp->next=NULL;
// //         first=temp;
// //     for(i=2;i<=duzina;i++){
// //         pom=(struct node*)malloc(sizeof(struct node));
// //         if(pom==NULL){
// //             printf("Nema memorije!");
// //         }
// //         else{
// //         printf("Unesite datu za %d-i element",i);
// //         scanf("%d",&elem);
// //         pom->data=elem;
// //         pom->next=NULL;
// //         temp->next=pom;
// //         temp=temp->next;
// //         }
// //     }
// //     }
// // }

// // main(){
// //     int n;
// //     printf("\n\n Linked List : To create and display Singly Linked List :\n");
// // 	printf("-------------------------------------------------------------\n");
// //     printf("Unesite broj cvorova koliko zelite da imate");
// //     scanf("%d",&n);
// //     kreirajlistu(n);
// //     printf("Uneta lista:\n");
// //     display();
// //     return 0;
// // }

// // 2. Write a program in C to create a singly linked list of n nodes and display it in reverse order.

// void createlist(int n){
//     struct node *first,*temp,*last;
//     int i,elem;
//     first=(struct node*)malloc(sizeof(struct node));
//     if(first==NULL){
//         printf("No memmory!");
//     }   
//     else{
//         printf("Enter data for the first node!");
//         scanf("%d",&elem);
//         first->data=elem;
//         first->next=NULL;
//         temp=first;
//         first=temp;
//         for(i=2;i<=n;i++){
//             last=(struct node*)malloc(sizeof(struct node));
//             if(last == NULL){
//                 printf("No memory for last!");
//                 break;
//             }
//             else{
//                 printf("Input data for %d node:",i);
//                 scanf("%d",&elem);
//                 last->data=elem;
//                 last->next=NULL;
//                 temp->next=last;
//                 temp=temp->next;
//             }
//         }
//     }
// }
// void display(){
//     struct node *temp,*first;
//     if(first==NULL){
//         printf("Lista je prazna!");
//     }
//     else{
//         temp=first;
//         while(temp!=NULL){
//             printf(" Data= %d",temp->data);
//             temp=temp->next;
//         }
//     }
// }
// void reverse{

// }
// int main(){
//     int n;
//     printf("unesite n");
//     scanf("%d",&n);
//     printf("\n\n Linked List : Create a singly linked list and print it in reverse order :\n");
// 	printf("------------------------------------------------------------------------------\n");
//     createlist(n);
//     display();
//     return 0;
// }
typedef struct node{
    int data;
    struct node *next;
}NODE;
NODE *first=NULL,*last=NULL,*temp=NULL,*curr=NULL,*prev=NULL,*next=NULL,*prvi,*kraj,*sredina,*brisi,*prethodnik,*zadnji,*odredjena;;

int provera(){
    if(first==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void kreiranjejednog(int elem){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=elem;
    temp->next=NULL;
    if(first==NULL){
        first=temp;
        last=temp;
    }
    else{
        last->next=temp;
        last=temp;
    }
}
void display(){
    temp=first;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
}}

// 1. Write a program in C to create and display a Singly Linked List.
// int main(){
//     int n,i,elem;
//     printf("Unesite koliko cete cvorova da imate");
//     scanf("%d",&n);
//     printf("\nUnesite datu za cvorove!");
//     for(i=1;i<=n;i++){
//         printf("unesite datu za cvor\n");
//         scanf("%d",&elem);
//         kreiranjejednog(elem);
//     }
//     display();
//     return 0;
// }

// 2. Write a program in C to create a singly linked list of n nodes and display it in reverse order.


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

// int main(){
//     int n,i,elem;
//     printf("Unesite koliko cete cvorova da imate");
//     scanf("%d",&n);
//     printf("\nUnesite datu za cvorove!");
//     for(i=1;i<=n;i++){
//         printf("unesite datu za cvor\n");
//         scanf("%d",&elem);
//         kreiranjejednog(elem);
//     }
//     display();
//     // first = reverse(first);//ovo glavno za reverse u main!
//     // display();
//     return 0;
// }
// 3. Write a program in C to create a singly linked list of n nodes and count the number of nodes.
// Test Data :
// Input the number of nodes : 3
// Input data for node 1 : 5
// Input data for node 2 : 6
// Input data for node 3 : 7
int brojacanik(){
    int brojac;
    temp=first;
    while(temp!=NULL){
        brojac++;
        temp=temp->next;
    }
    return brojac;
}
// main(){
//     int i,elem,n;
//     printf("Unesite broj cvorova koliko zelite\n");
//     scanf("%d",&n);
//     printf("Nakon poruke unesite elemente unutar cvorova\n");
//     for(i=1;i<=n;i++){
//         printf("Unesite %d cvor",i);
//         scanf("%d",&elem);
//         kreiranjejednog(elem);
//     }
//     printf("Prikazacemo listu\n");
//     display();
//     printf("Prebrojali smo %d cvorova",brojacanik());
//     return 0;
// }
// 4. Write a program in C to insert a new node at the beginning of a Singly Linked List.
void naPocetak(int brojPocetak){
    prvi=(struct node*)malloc(sizeof(struct node));
        prvi->data=brojPocetak;
        prvi->next=first;
        first=prvi;   
}
// 5. Write a program in C to insert a new node at the end of a Singly Linked List.
void naKraj(int brojKraj){
    kraj=(struct node*)malloc(sizeof(struct node));
    kraj->data=brojKraj;
    kraj->next=NULL;
    last->next=kraj;
    last=kraj;
}
// 6. Write a program in C to insert a node in the middle of a Singly Linked List
void uSredinu(int brojSredina){
    sredina=(struct node*)malloc(sizeof(struct node));
    int ukupno=brojacanik();
    int ukupno2=ukupno/2;
   int i;
    if(ukupno%2!=0){
        printf("neparan broj cvorova,ne moze u sredinu ");
    } else{
        temp=first;
        for( i=1;i<ukupno2-1;i++){
            temp=temp->next;
        }
        sredina->data=brojSredina;
        sredina->next=temp->next;
        temp->next=sredina;
    }
}
// 7. Write a program in C to delete the first node of a Singly Linked List.
void brisiPrvi(){
    temp=first;
    first=first->next;
    free(temp);
}
main(){
    int i,elem,n;
    printf("Unesite broj cvorova koliko zelite\n");
    scanf("%d",&n);
    printf("Nakon poruke unesite elemente unutar cvorova\n");
    for(i=1;i<=n;i++){
        printf("Unesite %d cvor",i);
        scanf("%d",&elem);
        kreiranjejednog(elem);
    }
    display();
    // naPocetak(1);
    // // printf("\nNakon dodatogelementa:\n");
    // naKraj(3);
    // printf("\nNakon dodavanja na kraj!");
    // uSredinu(25);
    brisiPrvi();
    printf("\n");
    display();
    return 0;
}