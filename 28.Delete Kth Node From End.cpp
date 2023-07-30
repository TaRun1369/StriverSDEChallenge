Node* reverse(Node* &head)
{
    Node* curr = head;
    Node* prev = nullptr;
    Node* forward = nullptr;
    while(curr != nullptr)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}

 

void deleteNode(Node* &head, int position)

{
     if(position == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete(temp);
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int cnt =1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete(curr);
    }

}

 

Node* removeKthNode(Node* head, int K)

{

    head = reverse(head);
    deleteNode(head, K);
    head= reverse(head);
    return head;

}