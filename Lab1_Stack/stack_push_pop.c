#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push() {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
    } else {
        int x;
        printf("Enter element: \n");
        scanf("%d", &x);
        top++;
        stack[top] = x;
        printf("%d pushed to stack\n", x);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top--]);
    }
}

void display() {
    int i;
    if (top == -1) {
        printf("stack empty\n");
    } else {
        printf("Stack Display\n");
        for (i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nStack Menu\n");
        printf("1) Push\n");
        printf("2) Pop\n");
        printf("3) Display\n");
        printf("4) Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
