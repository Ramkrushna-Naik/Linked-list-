#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int k)
    {
        data=k;
        next=NULL;
    }
};
void rprint(Node* head);
Node* add(Node* head,int p);
Node* insert_at(Node* head,int pos,int data);
void nth_ele_end(Node *head,int n);
int main(){
    Node* head=NULL;
    head=add(head,10);
    head=add(head,20);
    head=add(head,30);
    head=add(head,40);
    head=insert_at(head,2,25);
    rprint(head);
    nth_ele_end(head,3);
    return 0;
}
void rprint(Node* head){
    if(head == NULL)
        return;
    cout<<(head->data)<<" ";
    rprint(head->next);
}
Node* add(Node* head,int p){
    Node* temp=new Node(p);
    temp->next=head;
    return temp;
    
}
Node* insert_at(Node* head,int pos,int data){
    Node*temp= new Node(data);
    if(pos==1){
        temp->next = head;
        return temp;
    }

    Node* curr=head;
    for(int i=0; i<=pos-2 && curr!= NULL;i++){
        curr=curr->next;
        }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}


void nth_ele_end(Node *head,int n){
    Node*fast=head;
    Node*slow=head;
    for (int i = 0; i<n; i++) {
        fast=fast->next;
    }
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    cout<<slow->data;
}