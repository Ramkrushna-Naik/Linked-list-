#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int x){
        data=x;
        next= NULL;
        prev=NULL;
    }
};

void printx(node* head){
    node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;

}
node* del_end(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->prev->next=NULL;
    delete curr;
    return head;
}

node* del_head(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
}

int main(){
    node* head= new node(10);
    node* temp1= new node(20);
    node* temp2= new node(30);
    node* temp3= new node(40);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp1->prev=head;
    temp2->prev=temp1;
    temp3->prev=temp2;
    printx(head);
    head=del_end(head);
    printx(head); 
    head=del_head(head);
    printx(head);   
    return 0;
}


