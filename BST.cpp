//binary search tree
#include <iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};


struct node *insert(int *root, int value){
    //allocate the memory
    node *new_node=new node;
    node *parent=NULL;
    //assign value to data
    new_node->data=value;
    //assign left child
    new_node->left=NULL;
    //assign right child
    new_node->right=NULL;
}


int main(){
    
}