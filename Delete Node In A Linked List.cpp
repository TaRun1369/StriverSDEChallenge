#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    // cout<<node->data<<endl;
    while(node->next->next != NULL){
        node->data = node->next->data;
        node = node->next;
    }
    node->data = node->next->data;
    node->next = NULL;
    // delete node;
    // LinkedListNode<int> * t = new LinkedListNode<int> (-1);
    // node->next = t;

}