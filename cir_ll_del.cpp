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


node* del_head(node*head);
node* insert_beg_eff(node* head,int x);
void print_ll(node*head);
node* del_head_eff(node*head);


int main(){
    node* head=NULL;
    head=insert_beg_eff(head,10);
    head=insert_beg_eff(head,20);
    head=insert_beg_eff(head,30);
    head=insert_beg_eff(head,40);
    print_ll(head);
    head=del_head_eff(head);
    cout<<endl;
    print_ll(head);
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


node* del_head(node*head){
    if(head==NULL){
        return NULL;
    }
    if(head->next=NULL){
        delete head;
        return NULL;
    }
    node*curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=head->next;
        delete head;
        return curr->next;
}

node* del_head_eff(node*head){
    if(head==NULL){
        return NULL;
    }
    if(head->next=NULL){
        delete head;
        return NULL;
    }
    head->data=head->next->data;
        node* temp=head->next;
        delete temp;
        return head;
}