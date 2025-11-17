#include <stdio.h>
#define MAX 5

int top = -1;
int stack[MAX];
void push(int x){
    if (top == MAX -1){
        printf("Stack is full cant insert %d\n", x);
    }
    else{
        top ++;
        stack[top] = x;
        printf("value %d inserted in stack");
    }
}

void pop(){
    if (top == -1) {
        printf("Stack is empty cant pop");
    }
    else {
        top --;
        printf("Popped %d from stack", stack[top]);
    }
}

void peek(){
    int i;
    if (top == -1){
        printf("stack is empty");
    }
    else{
        for(i = top; i>=0; i--){
            printf("Elements are: %d\n", stack[i]);
        }
    }
}

int main() {
    int choice, int value;
    while(1){
        printf("Enter 1 to for push..\n");
        printf("Enter 2 to pop");
        printf("Enter 3 to view the items in stack\n");
        printf("Enter 4 to exit");

        scanf("%d", choice);
        
        switch ((choice)){
            case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;

            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            return 0;

            default:
            printf("Invalid choice try to choose bw 1, 2, 3, 4");
        }
    }
    return 0;
}