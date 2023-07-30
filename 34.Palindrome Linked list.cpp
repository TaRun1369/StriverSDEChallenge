LinkedListNode<int>* reverse(LinkedListNode<int>* root){
    LinkedListNode<int>* temp = NULL;
    LinkedListNode<int>* nex = root,*nexx = NULL;

    while(nex != NULL){
        nexx = nex->next;
        nex->next = temp;
        temp = nex;
        nex = nexx;
    }
    return temp;

}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head == NULL || head->next == NULL){
        return true;
    }
    LinkedListNode<int>*  slow = head;
    LinkedListNode<int>* fast = head;

    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    // ab slow hai wo middle hai ab slow ke baad ki list reverse kar dete
    slow->next = reverse(slow->next);
    slow = slow->next;

    while(slow!= NULL){
        if(head->data != slow->data){
            return false;
        }
        head = head->next;
        slow = slow->next;

    }
    return true;
}