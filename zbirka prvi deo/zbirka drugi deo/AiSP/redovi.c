#include <stdio.h>
#include <stdlib.h>

#define SIZE 5;
int CQ[SIZE],front=-1,rear=-1;

//f-ja za proveravanje da li je red pun
int CQFULL(){
    if((front==rear+1) || (front==0 && rear==SIZE-1)){
        return 1;
    }
    else{
        return 0;
    }
}

int CQEMPTY(){
    if(front==-1){
        return 1;
    }
    else{
        return 0;
    }
}
main(){
int CQ[SIZE],front=-1,rear=-1;

}