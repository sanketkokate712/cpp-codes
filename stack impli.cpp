#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

/* push function */
void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = value;
    printf("Pushed %d\n", value);
}

/* pop function */
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped %d\n", stack[top]);
    top--;
}

/* peek function */
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element is %d\n", stack[top]);
}

/* display function */
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {

    push(10);
    push(20);
    push(30);

    display();

    pop();
    peek();

    display();

    return 0;
}
