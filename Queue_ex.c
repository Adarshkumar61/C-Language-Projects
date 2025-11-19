#include <stdio.h>
# define MAX 5

int front = -1;
int rear = -1;
int queue[MAX];
void enqueue(int x){
    if (rear == MAX -1){
        printf("Queue is full cant insert %d\n", x);
    }
    else{
        if (front == -1){
            front = 0;
        }
        rear ++;
        queue[rear] = x;
        printf("%d inserted in queue\n", x);
    }

}

void dequeue(){
    if (front == -1 || front > rear)} {
        print("Queue is empty");

    }
    else {
        printf("value %d is dequeue from queue", queue[front]);
        front++;
    }
