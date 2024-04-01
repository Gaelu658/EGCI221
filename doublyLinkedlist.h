class DoublyLinklist{
    private:
    Node * head;
    Node * tail;
}

DoublyLinkedlist::DoublyLinkedlist(){
this->head = NULL;
this->tail = NULL;
}

void DoublyLinkedlist::insert(int number){
    if(tail==NULL){
        haed = tail = new Node(number);
        return;
    }

    tail->next = new Node(number);
    tail->next->prev = tail;
    tail = tail->next;
}

void DoublyLinkedlist::print(){
    for(Node * temp = head;
    temp != NULL;
    temp = temp->next)
    std::cout << temp->value << " ";
    std::cout << std::endl;
}

void DoublyLinkedlist::printReversed(){
    for(Node * temp = tail;
    temp != NULL;
    temp = temp->prev)
    std::cout << temp->value << " ";
    std::cout << std::endl;
}
}