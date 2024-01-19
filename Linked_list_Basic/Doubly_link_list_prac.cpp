/*
            Doubly Linked List Main Operations
*/

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next->prev = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void delete_at_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 0; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delnode = temp->next;
    temp->next = temp->next->next;
    delete delnode;
    temp->next->prev = temp;
}

void delete_head(Node *&head)
{
    Node *delnode = head;
    head = head->next;
    delete head;
    head->prev = NULL;
}
void delete_tail(Node *&tail)
{
    Node *delnode = tail;
    tail = tail->prev;
    delete delnode;
    tail->next = NULL;
}

void print_normal(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    // insert at position//

    int pos, val;
    cout << "Enter your position and value" << endl;
    cin >> pos >> val;
    if (pos == 0)
    {
        insert_at_head(head, tail, val);
    }
    else if (pos == size(head))
    {
        insert_at_tail(head, tail, val);
    }
    else if (pos >= size(head))
    {
        cout << "invalid index" << endl;
    }
    else
    {
        insert_at_position(head, pos, val);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}
