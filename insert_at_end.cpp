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
Node* insert_end(Node* head,int p);
int main(){
    Node* head=NULL;
    head=insert_end(head,10);
    head=insert_end(head,20);
    head=insert_end(head,30);
    
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
