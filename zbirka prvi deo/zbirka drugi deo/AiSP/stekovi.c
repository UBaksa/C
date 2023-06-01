#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// #define SIZE 5            /* Size of Stack */
// int s[SIZE],top=-1; //ovo se definise uvek izvan main-a.kao i za liste!
// //provera da li je pun stek.
// int Sfull()
// {                     
//     if(top == SIZE-1) return 1;
//     return 0;
// }
// //provera da li je stek prazan.
// int Sempty()
// {                
//     if(top == -1) return 1;
//     return 0;
// }
// //push metoda-dodavanje elemenata
// void push(int elem){
//     if(Sfull()){
//         printf("Pun je stek");
//     }
//     else{
//         ++top;
//         s[top]=elem;
//     }
// }
// //pop metoda-za brisanje elemenata
// int pop()
// {                      /* Function for POP operation */
//     int elem;
//     if(Sempty())
//     { 
//     printf("\n\nPrazan je stek!\n\n");
//     return(-1); 
//     }
//     else
//     {
//         elem=s[top];
//         top--;
//         return(elem); }
// }
// void display()
// {                  /* Function to display status of Stack */
//     int i;
//     if(Sempty()) printf(" \n Empty Stack\n");
//     else
//     {
//         for(i=0;i<=top;i++)
//             printf("%d\n",s[i]);
//         printf("^Top");}
// }
// main(){
// // push(5);   
// // push(5);   
// // // push(5);   
// // // push(5);   
// // // push(5);   
// // // push(5);
// // // pop();   
// // // pop();  
// // // push(5);
// // // push(5);
// // // push(5);
// // return 0;
// // }

// ////////STEKOVI POMOCU LANCANIH LISTA///////////

// typedef struct node
// {
//     int data;
//     struct node *link;
// }NODE;
// NODE *top=NULL;  
// //dodavanje odozgo/na vrh
// void Push(int info){
//     NODE *temp;
//     temp=(NODE *)malloc(sizeof(NODE));
//     if( temp == NULL)//provera je li stek pun
//         printf(" Out of Memory !! Overflow !!!");
// else
//     {
//         temp->data=info;
//         temp->link=top;
//         top=temp;
//         printf(" Node has been inserted at Top(Front) Successfully !!");
//     }
// }
// //brisanje poslednjeg/gornjeg elementa/cvora
// int Pop()
// {
//     int info;
//     NODE *t;
//     if( top ==  NULL) //provera je li stek prazan
// {
//  printf("Prazan stek!"); 
// return -1;
//  }
//   else
//     {
//         t=top;
//         info=top->data;
//         top=top->link;
//         t->link=NULL;
//         free(t);
//         return(info);
//     }
// }
// //prikaz steka
// void Display()
// {
//     NODE *t;
//     if( top == NULL) printf("Prazna stek!\n");
//     else
//     {
//         t=top;
//         printf("Top->");

//         while(t)
//         {
//             printf("[%d]->",t->data);
//             t=t->link;
//         }
//         printf("Null\n");
//     }
// }

/////////////////////////DVA STEKA PREDSTAVLJENA POMOCU NIZA!!/////////////////////////////////
#define SIZE 10            /* Size of Stack */
int s[SIZE],top[3]={0,-1,SIZE};
int Sfull()
{                     /* Function to Check Stack Full */
    if(top[1] == top[2]-1) return 1;//ovde se proverava,kraj prvog i kraj drugog,gde prvi ide u iz leve u desnu,a drugi iz desne u levu stranu i da se nadju negde na pola.
    return 0; 
}
int Sempty(brojsteka)//brojsteka= da li cemo u prvi ili drugi niz!
{
    /* Function to Check Stack Empty */
    switch(brojsteka)
    {
    case 1: if(top[1] == -1) return 1; else return 0;//proverava se prvi stek,ovde ako je top -1 onda je prazan
    case 2: if(top[2] == SIZE) return 1;else return 0;//proverava se drugi stek,a ovde top ako je jednak velicini niza,onda je prazan,skicirano kad je skroz u desno,odnosno kad dodje na kraj oba niza kad se spoje.
    }
}
void push(int elem,int brojsteka)
{ 
    int pos;	 
    if( Sfull()) 
    {
        printf("\n\n Overflow!!!!\n\n")
    };
    else {
        if(brojsteka==1) 
        {
            pos= ++top[brojsteka];
        }
        else 
        {
            pos=--top[brojsteka];
        }
        s[pos]=elem; }
}
int pop(int brojsteka)
{ 
    int elem,pos; 
    if(Sempty(brojsteka))
    { 
    printf("\n\nZadati stek je prazan!!!\n\n");
    return(-1); 
    } 
    else {
        pos=top[brojsteka];
        elem=s[pos];
        if(brojsteka == 1)top[brojsteka]--;
        else top[stno]++;
        return(elem);}
}
//prikaz steka
void display(int stno)
{ int i;
    if(Sempty(stno)) printf(" \n Empty Stack\n");
    else {
        if(stno == 1)
        {
            for(i=0;i<=top[stno];i++)
            printf("%d\n",s[i]);
            printf("^Top");
        }
        else
        {
            for(i=SIZE-1;i>=top[stno];i--)
            {
                printf("%d\n",s[i]);
            }
            printf("^Top"); 
        }
        }
}
