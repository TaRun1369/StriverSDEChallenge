#include <bits/stdc++.h> 
// Stack class.
class Stack {
private:
    int* arr;
    int tail;
    int max_;

public:
    
    Stack(int capacity) {
        arr = new int[capacity];
        tail = 0;
        max_ = capacity;
    }

    void push(int num) {
        if(tail != max_){
            arr[tail] = num;
            tail++;
        }
    }

    int pop() {
        if(tail != 0){
            tail--;
            return arr[tail];
        }
        return -1;
    }
    
    int top() {
        return (tail != 0)?(arr[tail - 1]):(-1);
    }
    
    int isEmpty() {
        return (tail == 0)?(1):(0);
    }
    
    int isFull() {
        return (tail == max_);
    }
    
};