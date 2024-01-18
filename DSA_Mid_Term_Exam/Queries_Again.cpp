/*
Problem Statement

You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

You need to insert the value V at index X. Assume that index starts from 0.
After that for each query you need to print the linked list from left to right and right to left.
If the index is invalid, then print "Invalid".
Note: You must use Doubly Linked List, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 1000;
0 <= X <= 1000;
0 <= V <= 1000
Output Format

For each query print the linked list from left to right and right to left or print "Invalid" as asked.
Print "L -> " before printing the linked list from left to right.
Print "R -> " before printing the linked list from right to left.
Sample Input 0

5
1 10
0 10
1 20
3 30
2 30
Sample Output 0

Invalid
L -> 10 
R -> 10 
L -> 10 20 
R -> 20 10 
Invalid
L -> 10 20 30 
R -> 30 20 10 
Sample Input 1

10
0 10
1 20
0 30
1 40
6 50
0 60
4 70
4 80
2 90
1 100
Sample Output 1

L -> 10 
R -> 10 
L -> 10 20 
R -> 20 10 
L -> 30 10 20 
R -> 20 10 30 
L -> 30 40 10 20 
R -> 20 10 40 30 
Invalid
L -> 60 30 40 10 20 
R -> 20 10 40 30 60 
L -> 60 30 40 10 70 20 
R -> 20 70 10 40 30 60 
L -> 60 30 40 10 80 70 20 
R -> 20 70 80 10 40 30 60 
L -> 60 30 90 40 10 80 70 20 
R -> 20 70 80 10 40 90 30 60 
L -> 60 100 30 90 40 10 80 70 20 
R -> 20 70 80 10 40 90 30 100 60 
*/

#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};

int size(Node* head)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        cout<<"Invalid";
        return;
    }
    
    if (tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;


}
// void insert_at_position(Node* head,int pos,int val)
// {
//     Node* newnode=new Node(val);
//     Node* temp=head;
//     for(int i=0;i<=pos-1;i++)
//     {
//         temp=temp->next;
//     }
//     newnode->next=temp->next;
//     temp->next=newnode;
//     newnode->prev=temp;
//     newnode->next->prev=newnode;
// }
void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insert_at_position(Node* head, int pos, int val, Node* &tail) {
    Node* newnode = new Node(val);
    Node* temp = head;
    for (int i = 0; i < pos - 1; i++) {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    if (pos == size(head) - 1) {
        tail = newnode; // Update tail if inserting at the end
    }
    newnode->next->prev=newnode;
}

void print_normal(Node* head)
{
    Node* temp=head;
    cout<<"L -> ";

    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void print_reverse(Node* tail)
{
    Node* temp=tail;
    cout<<"R -> ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
int main()
{
    int q;
    cin>>q;

    Node* head=NULL;
    Node* tail=NULL;
    while(q--)
    {
    
    int x,y;
cin>>x >> y;
if(x>size(head))
{
    cout<<"Invalid"<<endl;
    continue;
}
else if (x==0)
{
    insert_at_head(head,tail,y);
}
 else if(x==size(head))
{
insert_at_tail(head,tail,y);
}
 else 
{
   
    insert_at_position(head,x,y,tail);
}

print_normal(head); 
cout<<endl;
print_reverse(tail);


}

return 0;
}