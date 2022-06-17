#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int k){
        data=k;
        next=NULL;
    }
};

void print_ll(node*head);
void rprint(node*head);
node* insert_end(node* head,int k);
node* insert_beg(node* head,int k);
node* insert_at(node* head,int pos , int data);
node* del_end(node*head);
node* del_beg(node*head);
/*------------------------Main-------------------------------------------------*/
int main(){
    node*head= NULL;
    int x=1;
    while(x){
        int n;
        cout<<"enter 1 for input at beg"<<endl;
        cout<<"enter 2 for input at end"<<endl;
        cout<<"enter 3 to print"<<endl;
        cout<<"enter 4 to print in recursive manner"<<endl;
        cout<<"enter 5 to insert at a postion"<<endl;
        cout<<"enter 6 to delete from begining"<<endl;
        cout<<"enter 7 to delete from end"<<endl;
        cin>>n;
        switch(n){
            case 1:int p;
                    cout<<"enter number";
                    cin>>p;
                    head=insert_beg(head,p);
                    break;
            case 2:int q;
                    cout<<"enter number";
                    cin>>q;
                    head=insert_end(head,q);
                    break;
            
            case 3:print_ll(head);break;
            
            case 4:rprint(head);break;

            case 5:int pos,da;
                    cout<<"enter pos\n";cin>>pos;
                    cout<<"enter data\n";cin>>da;
                    head=insert_at(head,pos,da);
            
            case 6:head=del_beg(head);

            case 7:head=del_end(head);

            default :cout<<"wrong input"<<endl;break;
        }
        cout<<"press 1 to continue else 0"<<endl;
        cin>>x;
    }
    return 0;

}



/*------------------------Funtion-------------------------------------------------*/

void print_ll(node*head){
    node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"  ";
        curr=curr->next;
    }
}


void rprint(node*head){
    if(head==NULL){
        return;
    }
        cout<<head->data<<"  ";
        rprint(head->next);
}


node* insert_end(node* head,int k){
    node *temp= new node(k);
    if(head==NULL){
        return temp;
    }
    node* curr=head;
    while(curr->next != NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}


node* insert_beg(node* head,int k){
    node* temp=new node(k);
    temp->next=head;
    return temp;
}

node* insert_at(node* head,int pos , int data){
    node* temp=new node(data);
    if(pos==1){
        temp->next = head;
        return temp;
    }
    node* curr=head;
    for(int i=0;curr!=NULL && i<=pos-2;i++){
        curr=curr->next;
    }
    curr->next=temp->next;
    return head;
}

node* del_beg(node*head){
    if(head==NULL){
        return NULL;
    }
   else{
    node* temp=head->next;
    delete head;
    return temp;
   }
}

node* del_end(node*head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node* curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    delete (curr->next);
    curr->next=NULL;
    return head;
}