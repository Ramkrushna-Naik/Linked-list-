#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};


node* insert_beg_naive(node* head,int x);
node* insert_beg_eff(node* head,int x);
void print_ll(node*head);
void print_ll_do(node*head);
node *insert_end(node *head,int x);
node *insert_end_eff(node *head,int x);


int main(){
    node* head=NULL;
    head=insert_beg_naive(head,10);//10
    head=insert_beg_naive(head,20);//20 10
    head=insert_beg_eff(head,30);//30 20 10
    head=insert_beg_eff(head,40);//40 30 20 10
    head=insert_end(head,50);//40 30 20 10 50 
    head=insert_end_eff(head,60);//40 30 20 10 50 60
    print_ll(head);
    cout<<endl;
    print_ll_do(head);
}

node* insert_beg_naive(node* head,int x){
    node*temp=new node(x);
    if(head==NULL)
        temp->next=temp;
    else{
        node*curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
        return temp;
    }
}

node* insert_beg_eff(node* head,int x){
    node*temp=new node(x);
    if(head==NULL)
        temp->next=temp;
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
    }
}

void print_ll(node*head){
    if(head==NULL) return;

    cout<<head->data<<" ";
    for(node*k=head->next;k!=head;k=k->next){
        cout<<k->data<<" ";
    }
}

void print_ll_do(node*head){
    if(head==NULL) return;
    node*curr=head;
    do{
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }while(curr!=head);
}

node *insert_end(node *head,int x){
    node*temp=new node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    node* curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
    return head;
}


node* insert_end_eff(node* head,int x){
    node*temp=new node(x);
    if(head==NULL)
        temp->next=temp;
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return temp;
    }
}