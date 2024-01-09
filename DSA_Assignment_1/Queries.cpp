/*
Problem Statement

You have a singly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

If X is 0 that means you will insert the value V to the head of the linked list.
If X is 1 then you will insert the value V to the tail of the linked list.
If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
After each query you need to print the linked list.
Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 1000;
0 <= X <= 2;
0 <= V <= 10^9
Output Format

For each query ouput the updated linked list.
Sample Input 0

4
0 10
1 20
1 30
0 40
Sample Output 0

10 
10 20 
10 20 30 
40 10 20 30 
Sample Input 1

11
0 10
2 5
1 20
1 30
0 40
2 0
0 50
2 2
1 60
2 3
2 3
Sample Output 1

10 
10 
10 20 
10 20 30 
40 10 20 30 
10 20 30 
50 10 20 30 
50 10 30 
50 10 30 60 
50 10 30 
50 10 30 
Sample Input 2

10
1 4
2 1
0 9
0 10
2 2
1 5
2 0
2 1
2 5
2 2
Sample Output 2

4 
4 
9 4 
10 9 4 
10 9 
10 9 5 
9 5 
9 
9 
9 
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
void insert_at_head(Node* &head,int v)
{
  Node* newNode=new Node(v);
  newNode->next=head;
  head = newNode;  
}

void insert_at_tail(Node* &head,int v)
{
    Node* newNode = new Node(v);
    if(head == NULL)
    {
        head= newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next= newNode;
}

void Delete_at_Position(Node* &head, int p,int s)
{
    
if (p >= s || p < 0) 
    {
        return;
    }

    if (p == 0) 
    {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
     else 
     {
        Node* tmp = head;
        for (int i = 1; i < p; i++) 
        {
            tmp = tmp->next;
        }
        Node* deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
}
int size(Node * head)
{
    Node* tmp=head;
    int count=0;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}

void print_link_list(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
       
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }

}

int main()
{
    int q;
    cin>>q;

    Node* head=NULL;
    while(q--)
    {
    
    int x,y;
cin>>x >> y;
if (x==0)
{
    insert_at_head(head,y);
}
 if(x==1)
{
insert_at_tail(head,y);
}
 if (x==2)
{
    int s=size(head);
     Delete_at_Position(head,y,s);   
}
print_link_list(head);
cout<<endl; 
}



return 0;
}


/*          Another Method         */




#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int size(Node* head) {
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_head(Node* &head, int v) {
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node* &head, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void delete_at_position(Node* &head, int p) {
    if (p >= size(head) || p < 0) {
        //cout << "Invalid Index" << endl;
        return;
    }

    if (p == 0) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
    } else {
        Node* tmp = head;
        for (int i = 1; i < p; i++) {
            tmp = tmp->next;
        }
        Node* deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
}



void print_link_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    int q;
    cin >> q;

    Node* head = NULL;

    while (q--) {
        int x, y;
        cin >> x >> y;
        if (x == 0) {
            insert_at_head(head, y);
        } else if (x == 1) {
            insert_at_tail(head, y);
        } else if (x == 2) {
            delete_at_position(head, y);
        }

        print_link_list(head);
    }

    return 0;
}