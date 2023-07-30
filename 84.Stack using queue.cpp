class Stack {
        // Define the data members.
    int t;
    queue<int> q;
    // int front;
    // int rear;

   public:
    Stack() {
        // front = -1;
        
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return q.size();

        // Implement the getSize() function.
    }

    bool isEmpty() {
        return q.size() == 0;
        // Implement the isEmpty() function.
    }

    void push(int element) {
        if(!q.empty()){
            q.push(element);        
        int count = 0;
        while (count < q.size() - 1) {
          int l = q.front();
          q.pop();
          q.push(l);
          count++;
        }
        } else {
          q.push(element);
        }
        // Implement the push() function.
    }

    int pop() {
      if (!q.empty()) {
        int l = q.front();
        q.pop();
        return l;
      }
      return -1;
        // Implement the pop() function.
    }

    int top() {
        return !q.empty() ? q.front() : -1;

        // Implement the top() function.
    }
};