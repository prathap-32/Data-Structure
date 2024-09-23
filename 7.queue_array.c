#include<stdio.h>

#define max 5
int queue[max];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == max - 1) {
        printf("\nQueue is full (overflow)\n");
    } else {
        if (front == -1) {
            front = 0; 
        }
        rear = rear + 1;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1) {
        printf("\nQueue is empty (underflow)\n");
    } else {
        printf("\nDequeued element is %d\n", queue[front]);
        if (front == rear) {
            front = rear = -1; 
        } else {
            front++;
        }
    }
}

void display() {
    if (front == -1) {
        printf("\nQueue is empty.\n");
    } else {
        printf("\nQueue elements are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(0);
    enqueue(14);
    enqueue(35);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    dequeue();
    display();
    return 0;
}