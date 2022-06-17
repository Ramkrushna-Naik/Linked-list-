#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node*prev;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

node* add(node*head,int x){
    node* temp=new node(x);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
}

void print_ll(node*head){
    if(head==NULL) return;

    cout<<head->data<<" ";
    for(node*k=head->next;k!=head;k=k->next){
        cout<<k->data<<" ";
    }
}

int main(){
    node* head;
    head=add(head,10);
    head=add(head,20);
    head=add(head,30);
    head=add(head,40);
    cout<<head->data;
    print_ll(head);
}