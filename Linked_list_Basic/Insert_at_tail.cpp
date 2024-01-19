/*
    Singly Linked List Insert Operations
*/

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_link_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << "Your Link List: " << endl : cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    cout << "Enter Your Option" << endl;
    cout << "Option 1 : Insert at Tail " << endl;
    int op;
    cin >> op;
    if (op == 1)
    {
        cout << "Please enter your Value: " << endl;
        int v;
        cin >> v;
        insert_at_tail(head, v);
    }
    print_link_list(head);

    return 0;
}