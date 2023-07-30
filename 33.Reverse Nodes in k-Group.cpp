#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
                int data;
                Node *next;
                Node(int data)
                {
                        this->data = data;
                        this->next = NULL;
                }
        };

*****************************************************************/

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
        // Write your code here.
if (head ==NULL){
                return head;
        }

        Node *dummy= new Node(0);
        dummy->next =head;
        Node *prev = dummy, *nex=dummy, *curr=dummy;


        for(int i = 0;i<n;i++){
                int k = b[i];
                if (prev==NULL||prev->next==NULL){
                        break;
                }
                // This so that prev and curr does not change
                if (k==0){
                        continue;
                }

                curr=prev->next;
                nex=curr->next;
                for (int j=1;j<k && curr!=NULL && curr->next!=NULL ;j++){
                        curr->next = nex->next;
                        nex->next = prev ->next;
                        prev->next = nex;
                        nex = curr->next;
                }
                prev = curr;
        }

        return dummy->next;
        
}