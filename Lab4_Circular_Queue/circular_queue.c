#include <stdio.h>
#define SIZE 3

int queue[SIZE];
int front = -1, rear = -1;

void insert() {
    int item;
    if ((rear + 1) % SIZE == front) {
        printf("Queue overflow\n");
        return;
    }
    printf("Enter the element: ");
    scanf("%d", &item);

    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % SIZE;
    queue[rear] = item;
    printf("Element inserted Successfully\n");
}

void delete_element() {
    if (front == -1) {
        printf("Queue Empty!\n");
        return;
    }
    printf("Deleted element: %d\n", queue[front]);

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1) {
        printf("Queue Empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nQUEUE MENU\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete_element();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
