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
int main(){
    Node* head=new Node(20);
    head->next= new Node(30);
    head->next->next= new Node(40);
    head->next->next->next= new Node(50);
    head=add(head,10);
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
