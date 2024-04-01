#include "bstNode.h"

class BST{
    private:
    Node * root;
    public:
    BST();
    void insert(int number);
    void inOrder();
    void preOrder();
};

BST::BST(){
    this->root = NULL;
}

void BST::insert(int number){
    if(this->root == NULL){
        this->root = new Node(number);
        return;
    }

    Node * temp = this->root;
    Node * prev = temp;
    while(temp){
        prev = temp;
        temp->left;
    }
}