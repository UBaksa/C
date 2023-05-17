#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// // binarno pretrazivanje-podela na pola!

// int binarySearch(int niz[],int vrednost){
//     int start=0;
//     int kraj= niz.length-1;//ili n duzina niza-1;
//     while(start<=kraj){
//         int sredina = (start+kraj)/2;
//         if(niz[sredina]==vrednost){//ako je element tacno na sredini!
//             return sredina;
//         }
//         else if(niz[mid]<vrednost){//vrednost veca od sredine;
//             start=sredina+1;
//         }
//         else{//ovo je slucaj kad je vrednost manja od sredine
//             kraj=sredina-1;
//         }
//     }
//     return -1;//ovo je ako ne nadje element
// }


// vektorska prezentacija matrice,sa tri polja se samo cita red,kolona i vrednost

///////////////////////// LISTE ////////////////////////////

//kreiranje liste-JEDNOSTRUKE!!!!!
typedef struct NODE{
    int data;//vrednost liste prva kockica
    struct node *next;//druga kockica koja sadrzi adresu od sledeceg elementa,tjst pokazuje na sledeci element
}NODE;
//Kreiranje prvog i poslednjeg elementa.
NODE *first=NULL,*last=NULL,*temp=NULL;//first prvi,last poslednji,temp trenutni.
// prvi nema prethodnog tjst data od prvog nema pokazivac koji pokazuje na njega.
// poslednji nema pokazivac ka sledecem vec sadrzi samo vrednost-data.

//Provera da l je prazna lista.

int isEmpty(){
    if(first==NULL){
        return 1;
    }
    else return 0;
}
void create(int element){
    temp=(struct node*)malloc(sizeof(struct node));//kreiranje cvora;
    temp->data=element;//dodela vrednosti cvora
    temp->next=NULL;//dodela pokazivaca da ukazuje na NULL jer nema posle elemenata.
    if(first==NULL){//ako je prazna lista.
        first=temp;
        last=temp;
    }
    else{//ako nije praznax lista
        last->next=temp;//prethodni ukazuje na temp,odnosno novododani element.
        last=temp;//poslednji postaje temp!,odnosno novododani.
    }
}
//dodavanje elementa posle zadatog.
void insertAfter(NODE *pom,int element){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=element;
    temp->next=pom->next;
    pom->next=temp;
    if(pom==last){
        last=temp;
    }
}
//dodavanje elementa pre zadatog//princip je da se kreira novi cvor,u novi ubace podaci od sledeceg,a sledeci da pokupi nove podatke i da salje na temp,jer stari cvor mozda ima next na druge liste i to
void insertBefore(NODE *pom,int element){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->next=pom->next;//novi cvor cuva adresu koja vodi iz starog cvora
    temp->data=pom->data;//novi cvor cuva vrednost starog cvora
    pom->data=element;//stari cvor uzima novu vrednost
    pom->next=temp;//stari cvor sada ukazuje na novi cvor koji cuva podatke od starog!
    if(pom==last){
        temp=last;
    }
}
//brisanje nakon zadatog elementa.
void deleteAfter(NODE *pom){
    // if(isEmpty()==1){
    //     printf("List is empty!");
    // }//moze da se uvrsti ko uslov a i ne mora!
temp=pom->next;//saljemo adresu da poprimi element koji ide nakon pom-a.
pom->next=temp->next;//kupimo adresu od temp-a u pom-u jer temp brisemo
temp->next=NULL;//stavljamo da temp ne vodi nigde
free(temp);//brisemo temp jer ne vodi nigde,nema veze sto ima vrednost,brisemo ga jer je visak u memoriji!
}
//brisanje zadatog cvora!
void deleteZadati(NODE *pom){
    if((pom==first)&&(first==last)){//proveravamo jel imamo samo jedan cvor u listi/jedan element.
        first=last=NULL;
        free(pom);
    }
    temp=pom->next;//temp uzima vrednost cvora koji treba da obrisemo.
    pom->next=temp->next;//kopiramo adresu od tempa
    pom->data=temp->data;//kopiramo datu-vrednost od tempa
    free(temp);//brisemo temp.
}
//brisanje na zadatoj poziciji!
void deleteOnPosition(int pozicija){
    int brojac=1;
    NODE *p,*q;
    p=first;
    q=NULL;
    if(pozicija==1){
        first=p->next;
        free(p);
        return;
    }
    while(pozicija!=brojac){
        q=p;
        p=p->next;
        brojac++;
    }
    deleteAfter(q);
}
//prikaz
void display(){
    temp=first;
    printf("First->");
    while(temp!=NULL){
        printf("|%d| -->",temp->data);
        temp=temp->next;
    }
    printf(" NULL");
}
main(){
    create(5);
    create(5);
    create(5);
    display();
    return 0;
}