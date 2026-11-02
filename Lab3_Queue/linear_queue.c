#include <stdio.h>
#define MAX 3

int queue[MAX];
int front = -1;
int rear = -1;

void insert(int item) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = item;
        printf("Item inserted Successfully\n");
    }
}

void delete_item() {
    int item;
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        item = queue[front];
        front++;
        printf("Deleted item: %d\n", item);
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void display() {
    int i;
    if (front == -1 || front > rear) {
        printf("Queue Empty\n");
    } else {
        printf("Queue elements: ");
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, item;
    while (1) {
        printf("\n QUEUE OPERATIONS\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the item to insert: ");
                scanf("%d", &item);
                insert(item);
                break;
            case 2:
                delete_item();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
