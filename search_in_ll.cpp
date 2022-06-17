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
int search(Node* head,int data);
int main(){
    Node* head=NULL;
    head=add(head,10);
    head=add(head,20);
    head=add(head,30);
    head=add(head,40);
    
    rprint(head);
    cout<<endl;
    cout<<search(head,30);
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
int search(Node* head,int data){
    Node* curr=head;
    int pos=0;
    for(int i=0; i<=pos-2 && curr!= NULL;i++){
        if(curr->data==data){
            return pos;
        }
        else{
        curr=curr->next;
        pos++;
        }
    }
}
