/*
Problem Statement

You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain the values of the first singly linked list, and will terminate with -1.
Second line will contain the values of the second singly linked list, and will terminate with -1.
Constraints

1 <= N1, N2 <= 1000; Here N1 and N2 is the maximum number of nodes of the first and second linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output "YES" or "NO".
Sample Input 0

10 20 30 40 -1
10 20 30 40 -1
Sample Output 0

YES
Sample Input 1

10 20 30 40 -1
10 20 30 -1
Sample Output 1

NO
Sample Input 2

10 20 30 40 -1
40 30 20 10 -1
Sample Output 2

NO
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

void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head= newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail = newNode;
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

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
            break;
        insert_at_tail(head,tail,val);

    }
    Node* head2=NULL;
    Node* tail2=NULL;
    while(true)
    {
        cin>>val;
        if(val==-1)
            break;
        insert_at_tail(head2,tail2,val);
    }
    Node* temp=head;
    Node* tmp=head2;

    if(size(head)!= size(head2))
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int count = 0;
    while (temp != NULL && tmp != NULL)
    {
        if (temp->val == tmp->val)
            count++;
        temp = temp->next;
        tmp = tmp->next;
    }
    if (count == size(head))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}