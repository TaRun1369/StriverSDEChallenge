/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

Node *firstNode(Node *head)
{
    Node* slow = head;
    Node* fast = head;
     Node* entry = head;
    while(fast != NULL && fast->next != NULL){
         slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
        {

             while(entry != slow){
        
            entry = entry->next;
            slow = slow->next;
        }
        return entry;
        }
        
       

    }
   
   
    return NULL;
    //    Write your code here.
}