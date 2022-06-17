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
Node* del_end(Node* head);
int main(){
    Node* head=NULL;
    head=add(head,10);
    head=add(head,20);
    head=add(head,30);
    head=add(head,40);
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
Node* add(Node* head,int p){
    Node* temp=new Node(p);
    temp->next=head;
    return temp;
    
}
Node* del_end(Node* head){
    if(head==NULL ){
        return NULL;
    }
    if(head->next==NULL ){
        delete head;
        return NULL;
    }
        Node* curr=head;
        while(curr->next->next!=NULL){
            curr=curr->next;  
        }
    delete (curr->next);
    curr->next=NULL;
    return head;
}