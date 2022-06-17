#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int k)
    {
        data=k;
        next=NULL;
    }
};
void printll(Node* head);
int search_iter(Node* head,int key);

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);
    head->next->next->next->next= new Node(50);
    printll(head);
    int c=search_iter(head,20);
    cout<<"\n"<<c;
    return 0;
}
void printll(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}

int search_iter(Node* head,int key){
    int pos=1;
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==key){
            return pos;
        }
        else{
            curr=curr->next;
            pos++;
        }
    }
    return -1;

}