// Spajanje i invertovanje jednostuko ulancanih listi
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void insert();
void display();

typedef struct node
{
    int data;
    struct node *next;
}NODE;

NODE *temp=NULL;
NODE *first[3]={NULL,NULL,NULL};
NODE *last[3]={NULL,NULL,NULL};

NODE *concat(NODE *list1, NODE *list2);
NODE *invertuj();

	
		
NODE *invertuj(NODE *first){
NODE *p,*q,*r;
p=first;
q=NULL;
while (p!=NULL) {
r=q;
q=p;
p=p->next;
q->next=r;	
}
first=q;
return first;
}


NODE *concat(NODE *list1, NODE *list2){
	NODE *p;
	if (list1==NULL) return list2;
	else if (list2==NULL) return list1;
	p=list1;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=list2;
	return list1;
}

int isEmpty(){
	if (first==NULL) return 1;
	else return 0;
}

//operacija insert radi samo umetanje na kraj liste (tipicno za red)
//Generalno, za ulancanu listu treba omoguciti umetanja na bilo kojem mestu liste
void insert(int elem, int listNo)
{
	temp=(struct node*)malloc(sizeof(struct node));
    temp->data=elem;
    temp->next=NULL;
    if(first[listNo]==NULL)
    {
        first[listNo]=temp;
        last[listNo]=temp;
    }
    else
    {
        last[listNo]->next=temp;
        last[listNo]=temp;
    }
	
}


void display(NODE *first)
{
    temp=first;
    printf("First->");
    while(temp!=NULL)
    {
    //printf("|%d|%d| --> ",temp->data,temp->next);
    printf("|%d| --> ",temp->data);
    temp=temp->next;
    }
      printf("NULL");
}

main()
{
/*	int ch;
	int element;
    printf("\nSingle Linked List");
    printf("\n------------");
    printf("\n1.Insert at first list\n2.Insert at second list\n3.Invert first\n4.Invert second\n5.Concatenate first+second\n6.Exit");
    printf("\n\n-->Enter Your Choice:");
    scanf("%d",&ch);
 
        switch(ch)
        {
            case 1: printf("\n-->Enter value for first list:");scanf("%d",&element);insert(element, 1);break;
            case 2: printf("\n-->Enter value for second list:");scanf("%d",&element);insert(element, 2);break;
            case 3: invertuj(first[1]);break;
            case 4: invertuj(first[2]);break;
            case 5:concat(first[1],first[2]);break;
			case 6:exit(0);
            default:printf("\nError-->Enter a valid choice!!"); exit(0);
        
    }while(1);
	
*/	
	NODE *pom;
printf("Jednostruko ulancana lista list1 \n");
insert(10,1);
insert(20,1);
insert(30,1);
display(first[1]);
insert(100,2);
insert(200,2);
insert(300,2);
printf("\n Jednostruko ulancana lista list2 \n");
display(first[2]);
pom=concat(first[1],first[2]);
printf("\n Jednostruko ulancana lista list1+list2 \n");
display(pom);
printf("\n Invertovana lednostruko ulancana lista list1 \n");
pom=invertuj(first[1]);
display(pom);
} 