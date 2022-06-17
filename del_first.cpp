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
Node* del_first(Node* head);
int main(){
    Node* head=NULL;
    head=add(head,10);
    head=add(head,20);
    head=add(head,30);
    head=add(head,40);
    head=del_first(head);
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
Node* del_first(Node* head){
    if(head==NULL){
        return NULL;
    }
    else{
    Node*temp=head->next;
    delete head;
    return temp;
    }
}
