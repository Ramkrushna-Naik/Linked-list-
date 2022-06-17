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

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);
    head->next->next->next->next= new Node(50);
    /*int n;
    cin>>n;
    Node* trav=head;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        trav=new Node(p);
        trav=trav->next;
    }*/
    printll(head);
    return 0;
}
void printll(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}