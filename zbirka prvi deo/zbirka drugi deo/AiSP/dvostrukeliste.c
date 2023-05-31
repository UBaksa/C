#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//osnovno kreiranje dvostruke ulancane liste!
struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};
struct Node* head; 
//za kreiranje novog dvostrukok cvora gde je x element-data.
struct Node* GetNewNode(int x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}
//dodavanje na pocetak-vrh 
void InsertAtHead(int x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}
//dodavanje na kraj liste,gde cela lista mora da se obidje i da se doda kad temp bude na kraj null;samo kad se obilazi ili brise se kreira temp;
void InsertAtTail(int x) {
	struct Node* temp = head;
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next; // Go To last Node
	temp->next = newNode;
	newNode->prev = temp;
}
//prikazivanje liste
void Print() {
	struct Node* temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;}
	printf("\n");
}
//reverse print ili display.
//prvo je obidjemo do kraja liste,pa posle pmocu prev mozemo da obidjemo na pocetak,jer prvi pocetnik ima vrednost NULL za prev.
void ReversePrint() {
	struct Node* temp = head;
	if(temp == NULL) return; 
	while(temp->next != NULL) {
		temp = temp->next; }
		printf("Reverse: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->prev; }
	printf("\n");
}

main(){
    int i,n,el;
    printf("Unesite broj cvorova koliko zelite da imate");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Unesite element");
        scanf("%d",&el);
        InsertAtHead(el);
    }
    // Print();
    // InsertAtTail(25);
    Print();
    ReversePrint();
    return 0;
}