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
void printy(node* head){
    node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->prev;
        
    }
    cout<<endl;

}
node* in_end(node* head,int k){
    node *temp=new node(k);
    if(head==NULL){
        return temp;
    }
    node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    temp->prev=curr;
    curr->next=temp;
    return head;
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
    printy(temp3);
    head=in_end(head,50);
    printx(head);
    printy(temp3);    
    return 0;
}


