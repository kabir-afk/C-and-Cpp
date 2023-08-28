#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 20

int arr[MAX_SIZE];
int n = MAX_SIZE;
int front = -1, rear = -1;

bool isEmpty() {
    if (front == -1 && rear == -1) {
        return true;
    }
    return false;
}

bool isFull() {
    if ((rear + 1) % n == front) {
        return true;
    }
    return false;
}

void enqueue(int x) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue element %d.\n", x);
        return;
    }
    else if (isEmpty()) {
        rear = 0;
        front = 0;
    }
    else {
        rear = (rear + 1) % n;
    }
    arr[rear] = x;
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return;
    }
    else if (front == rear) {
        front = rear = -1;
    }
    else {
        front = (front + 1) % n;
    }
}

void print() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    int i = front;
    printf("Queue: ");
    while (i != rear) {
        printf("%d ", arr[i]);
        i = (i + 1) % n;
    }
    printf("%d\n", arr[rear]);
}

int main() {
    enqueue(2);
    enqueue(5);
    enqueue(7);
    dequeue();
    enqueue(3);
    enqueue(1);
    enqueue(9);
    dequeue();
    print();

    return 0;
}
