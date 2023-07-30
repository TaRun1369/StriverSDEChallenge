#include <bits/stdc++.h> 
class Queue {
    int *arr;
    int fron,rear;
    int size;

public:
    Queue() {
        fron = 0;
        rear = 0;
        arr = new int[10000];
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(fron == rear){
            return true;
        }
        return false;
        // Implement the isEmpty() function
    }

    void enqueue(int data) {
        if(rear == size-1) return;
        // if(isEmpty() == true){
        //     fron++;
        // }
        arr[rear] = data;
                rear++;

        // Implement the enqueue() function
    }

    int dequeue() {
        if(isEmpty()){
            return -1;
        }
        int a = arr[fron];
        fron++;
        if(fron == rear) {
            fron = 0;
            rear = 0;
        }
        return a;
        // Implement the dequeue() function
    }

    int front() {
        if(isEmpty() ) return -1;
        return arr[fron];
        // Implement the front() function
    }
};