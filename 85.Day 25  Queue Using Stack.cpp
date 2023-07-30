class Queue {
    // Define the data members(if any) here.
    stack<int> s;
    public:
    Queue() {

        // Initialize your data structure here.
    }

    void enQueue(int val) {
        if(s.empty()){
            s.push(val);
        }
        else{
            int t = s.top();
            s.pop();
            enQueue(val);
            s.push(t);
        }
        // Implement the enqueue() function.
    }

    int deQueue() {
        if(s.empty()) return -1;
        else{
        int t = s.top();
        s.pop();
        return t;
        }
        // Implement the dequeue() function.
    }

    int peek() {
        if(s.empty()) return -1;
        return s.top();
        // Implement the peek() function here.
    }

    bool isEmpty() {
        return s.empty();
        // Implement the isEmpty() function here.
    }
};