#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Char data;
    Node* next;
    Node(char k)
    {
        data=k;
        next=NULL;
    }
};
void rprint(Node* head);
Node* insert_end(Node* head,int p);
int main(){
    Node* head=NULL;
    head=insert_end(head,"A");
    head=insert_end(head,"B");
    head=insert_end(head,"C");
    head=insert_end(head,"D");
    head=insert_end(head,"E");
    head=insert_end(head,"F")
    head=del_end(head);
    rprint(head);
    return 0;
}
void rprint(Node* head){
    if(head == NULL)
        return;
    cout<<(head->data)<<" ";
    rprint(head->next);
}
Node* insert_end(Node* head,int p){
    Node* temp=new Node(p);
    if(head==NULL){
            return temp;
        }
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

node* del_end(node*head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node* curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    delete (curr->next);
    curr->next=NULL;
    return head;
}
