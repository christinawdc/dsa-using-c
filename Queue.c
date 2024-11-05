#include <stdio.h>
int enqueue(int rear,int n, int queue[]){
    int item;
    if (rear>=n-1){
        printf("\nQueue Overflow!");
    }
    else {
        rear++;
        printf("\nEnter value to be inserted:");
        scanf("%d",&item);
        queue[rear]=item;
    }
    return rear;
}

int dequeue(int front, int rear , int queue[]){
    if (front>rear){
        printf("\nQueue Underflow!");
    }
    else{
        printf("\n%d is deleted.",queue[front]);
        front++;
        
    }
    return front;
}

void display(int front, int rear, int queue[]){
    int i;
    if (front>rear){
        printf("\nQueue is empty.");
    }
    else{
    printf("\nQueue:");
    for (i=front;i<=rear;i++){
        printf("%d  ",queue[i]);
    }
    }
}
int main() {
    int op,n,front=0, rear=-1;
    printf("Enter the size of queue:");
    scanf("%d",&n);
    int queue[n];
    while (1){
    printf("\nEnqueue(1), Dequeue(2), Display(3), Exit(4)\nEnter your Choice:");
    scanf("%d",&op);
    switch (op){
        case 1: rear = enqueue(rear, n ,queue);
                break;
        case 2: front = dequeue(front,rear, queue);
                break;
        case 3: display(front, rear,queue);
                break;
        case 4: printf("\nExiting...");
                return 0;
                break;
        default: printf("Invalid operation, please try again.");
    }
    }
}
