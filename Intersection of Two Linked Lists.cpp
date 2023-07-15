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

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node* ft = firstHead;
    Node* st = secondHead;
    while(ft != NULL && st != NULL){
        if(ft == st){
            return  ft;
        }
        if(ft->next == NULL){
            ft = secondHead;
        }
        if(st->next == NULL){
            st = firstHead;
        }

        ft = ft->next;
        st = st->next;
    }
    return NULL;

}
