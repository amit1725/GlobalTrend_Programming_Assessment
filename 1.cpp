#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
    Node(int value,Node* nextVal){
        data=value;
        next=nextVal;
    }
};

Node* reverseLinkedList(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        Node* temp = curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}

void printLinkedList(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head= new Node(1);
    head->next= new Node(2);
    head->next->next= new Node(3);
    head->next->next->next = new Node(4);

    cout<<"Linked List Before Reversing\n";
    printLinkedList(head);

    cout<<"Linked List After Reversing\n";
    Node* temp=reverseLinkedList(head);
    printLinkedList(temp);

return 0;
}