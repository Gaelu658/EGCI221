#include "queueNode.h"

class Queue{
    private:
    Node * front;
    Node * back;
    public:
    void push(int number);
    int pop();
    Queue;
};

Queue::Queue(){
    front = back = NULL;
}

void Queue::push(int number){
    if(back == NULL){
        front = back = new Node(number);
        return;
    }
back->next = new Node(number);
back = back->next;
}

int Queue::pop(){
    Node * temp = front;
    front = front->next;
    int value = temp->value;
    delete temp;
    return value;
}