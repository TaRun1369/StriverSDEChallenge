Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node*dum = new Node();
    Node* temp = dum;
    int carry = 0;
    while(num1 != NULL || num2 != NULL || carry != 0){
        int sum = 0;
        if(num1 != NULL){
            sum+= num1->data;
            num1 = num1->next;
        }
        if(num2 != NULL){
            sum+= num2->data;
            num2 = num2->next;
        }
        sum += carry;
        carry = sum/10;
        Node* nN = new Node(sum % 10);
        temp->next = nN;
        temp = temp->next;

    }
    return dum->next;
    // Write your code here.
}