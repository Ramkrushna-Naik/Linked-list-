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
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next= new Node(30);
    cout<<head->data<<" "<<head->next->data<<" "<<head->next->next->data;
    return 0;
}