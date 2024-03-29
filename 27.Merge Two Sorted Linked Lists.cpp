Node<int>* sortTwoLists(Node<int>* l1, Node<int>* l2) {
    if(l1 == NULL) return l2; 

        if(l2 == NULL) return l1;

        if(l1->data > l2->data) swap(l1,l2);

        Node<int>* res = l1;

        while(l1 != NULL && l2 != NULL) {
 
            Node<int>* temp = NULL;

            while(l1 != NULL && l1->data <= l2->data) {

                temp = l1; 
                l1 = l1->next;
            }

          
            temp->next = l2;
            swap(l1,l2);
        }

        return res;
    
}
