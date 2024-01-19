/*
Reverse singly Link list.
*/

#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};


void print_list(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" "<<endl;
        temp=temp->next;
    }
    cout<<endl;
}


void reverse(Node* &head,Node* temp)
{
if(temp->next==NULL)
{
    head=temp;
    return;
}
reverse(head,temp->next);
temp->next->next=temp;
temp->next=NULL;

}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    


    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;


    print_list(head);
    reverse(head,head);
    print_list(head);
return 0; 
}