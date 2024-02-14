/*
Problem Statement

You will be given a binary tree as input in level order. You need to print the outer side of the binary tree. See the sample input output for more clarifications. You need to print from the left most leaf node to right most leaf node.

For example:

image

The output for the above tree will be: 90 40 20 10 30 50 60

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes
 Node's value
Output Format

Output the left most leaf node to right most leaf node.
Sample Input 0

10
20 30
40 70 -1 50
90 110 -1 -1 80 60
-1 -1 -1 -1 100 -1 -1 -1
-1 -1
Sample Output 0

90 40 20 10 30 50 60
Explanation 0

This test case was explained in the question.
Sample Input 1

10
20 30
-1 40 70 50
60 90 -1 -1 80 -1
-1 -1 -1 -1 100 110
-1 -1 -1 -1
Sample Output 1

60 40 20 10 30 50 80 110
Explanation 1

Outer part of the binary tree -
image

Sample Input 2

10
-1 20
-1 50
80 -1
-1 -1
Sample Output 2

10 20 50 80
Explanation 2

Outer part of the binary tree -
image

Sample Input 3

10
20 -1
-1 50
80 -1
-1 -1
Sample Output 3

80 50 20 10
Explanation 3

Outer part of the binary tree -
image

Submissions: 528
Max Score: 20
Difficulty: Easy
Rate This Challenge:


More

*/

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void pleft(Node *root)
{
    if (root->left)
    {
        pleft(root->left);
        cout << root->left->val << " ";
    }
    else
    {
        if (root->right)
        {
            pleft(root->right);
            cout << root->right->val << " ";
        }
    }
}

void pright(Node *root)
{
    if (root->right)
    {
        cout << root->right->val << " ";
        pright(root->right);
    }
    else
    {
        if (root->left)
        {
            cout << root->left->val << " ";
            pright(root->left);
        }
    }
}

int main()
{
    Node *root = input();

    if (root == NULL)
    {
        return 0;
    }

    if (root->left)
    {
        pleft(root);
    }

    cout << root->val << " ";

    if (root->right)
    {
        pright(root);
    }

    return 0;
}