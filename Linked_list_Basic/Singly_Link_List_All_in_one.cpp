/*
    Singly Linked List Main Operations
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
    cout << "Your Link List : ";
    while (tmp != NULL)
    {
        // cout<<"Your Link List : ";
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void Delete_at_Position(Node *head, int p)
{
    Node *tmp = head;
    for (int i = 1; i <= p - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head is not Available" << endl
             << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << endl;
        cout << "Enter Your Option" << endl;
        cout << "Option 1 : Insert at Tail " << endl;
        cout << "Option 2 : Insert at any position " << endl;
        cout << "Option 3 : Print Link List " << endl;
        cout << "Option 4 :  Insert at head " << endl;
        cout << "Option 5 : Delete at Any position" << endl;
        cout << "option 6 : Delete head " << endl;
        cout << "Option 7:  Terminate " << endl;
        cout << endl;
        int op;
        cin >> op;
        cout << endl;
        if (op == 1)
        {
            cout << "Please enter your Value: " << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            int pos, v;
            cout << "Enter position" << endl;
            cin >> pos;
            cout << "Enter value" << endl;
            cin >> v;
            insert_at_position(head, pos, v);
        }

        else if (op == 3)
        {
            print_link_list(head);
            cout << endl;
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter value" << endl;
            cin >> v;
            insert_at_head(head, v);
            cout << endl;
        }

        else if (op == 5)
        {
            int p;
            cout << "Enter position" << endl;
            cin >> p;
            Delete_at_Position(head, p);
        }

        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}