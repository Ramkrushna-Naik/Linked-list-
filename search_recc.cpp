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
int search_recr(Node* head,int key);

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);
    head->next->next->next->next= new Node(50);
    printll(head);
    int c=search_recr(head,30);
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

int search_recr(Node* head,int key){
    if(head==NULL){
        return -1;
    }
    if(head->data==key){
        return 1;
    }
    else{
        int res=search_recr(head->next,key);
        if (res==-1) return -1;
        else return (res +1);
    }
    

}