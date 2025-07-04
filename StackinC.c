#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed into stack\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("%d popped from the stack\n", stack[top--]);
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top of the stack is %d\n", stack[top]);
    }
}

void search(int key) {
    for (int i = 0; i <= top; i++) {
        if (stack[i] == key) {
            printf("Found %d at position %d (0-based index)\n", key, i);
            return;
        }
    }
    printf("Not Found\n");
}

void traverse() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Traversing: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack Elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value, key;

    while (1) {
        printf("\n--- Stack Operations Menu (Array Implementation) ---\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Search\n5. Traverse\n6. Display\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                printf("Enter value to search: ");
                scanf("%d", &key);
                search(key);
                break;
            case 5:
                traverse();
                break;
            case 6:
                display();
                break;
            case 7:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}