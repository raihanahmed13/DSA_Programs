#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head=NULL;
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=5;
    new_node->next=head;
    head=new_node;
    cout<<head;


}