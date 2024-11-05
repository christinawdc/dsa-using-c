#include <stdio.h>
#define max 5
int stack[max], top=-1;
void push(){
    int val;
    if (top==max-1){
        printf("\nStack Overflow!");
    }
    else {
        top++;
        printf("\nEnter value to be pushed:");
        scanf("%d",&val);
        stack[top]=val;
        printf("\n%d pushed to the stack.",val);
    }
}

void pop(){
    if (top==-1){
        printf("\nStack Underflow!");
    }
    else{
        printf("\n%d is popped from the stack.",stack[top]);
        top--;
    }
}

void display(){
    int i;
    if (top==-1){
        printf("\nStack is empty.");
    }
    else{
    printf("\nStack:");
    for (i=top;i>=0;i--){
        printf("%d  ",stack[i]);
    }
    }
}
int main() {
    int op;
    
    while (1){
    printf("\nPush(1), Pop(2), Display Stack(3),Exit(4)\nEnter your Choice:");
    scanf("%d",&op);
    switch (op){
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: display();
                break;
        case 4: printf("\nExiting...");
                return 0;
                break;
        default: printf("Invalid operation, please try again.");
    }
    }
}
