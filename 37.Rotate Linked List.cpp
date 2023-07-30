/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     
     
     Node* temp = head;
     int n = 0;
     while(temp != NULL){
          n++;
          temp = temp->next;
     }
          k = k%n;

     if(k == 0) return head;
     temp = head;
     for(int i = 0;i<n-k;i++){

          head = head->next;
     }
     Node* t = head;
     while(t->next != NULL){
          t = t->next;
     }
     t->next = temp;
     while(temp->next != head){
          temp = temp->next;
     }
     temp->next = NULL;
     return head;


}