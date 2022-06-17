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
Node* sint(Node* head,int p);
int main(){
    Node* head=NULL;
    head=sint(head,10);
    head=sint(head,24);
    head=sint(head,100);
    head=sint(head,2);
    rprint(head);
    return 0;
}
void rprint(Node* head){
    if(head == NULL)
        return;
    cout<<(head->data)<<" ";
    rprint(head->next);
}
Node* sint(Node* head,int data){
    Node*temp= new Node(data);
   if(head==NULL) return temp;
   if(data<head->data) {
       temp->next=head;
       return temp;
   }

    Node* curr=head;
    while(curr->next!=NULL && curr->data<data){
        curr=curr->next;
        }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
