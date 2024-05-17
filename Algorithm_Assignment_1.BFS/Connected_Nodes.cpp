/*
Problem Statement

You will be given an undirected graph as input. Then you will be given Q queries.
For each query you will be given a node X.
 You need to print the nodes that are connected with X in descending order.

Note: If there is no node connected to X , then print -1.

Input Format:

The first line will contain N and E , the number of nodes and the number of edges, respectively.
The values of the nodes range from 0 to N-1 .
Next  lines will contain two node values which means there is a connection between first node and second node.
The next line will contain Q.
The following Q lines will each contain X.

Output Format:

Output the nodes that are connected with X in descending order.
Sample Input 0

6 8
0 4
0 5
4 2
4 3
5 3
2 0
0 1
1 3
6
0
1
2
3
4
5
Sample Output 0

5 4 2 1
3 0
4 0
5 4 1
3 2 0
3 0
Sample Input 1

5 3
0 1
1 2
0 4
2
3
0
Sample Output 1

-1
4 1
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int f;
        cin >> f;
        vector<int> v;
        if (mat[f].empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int x : mat[f])
            {
                v.push_back(x);
                sort(v.begin(), v.end(), greater<int>());
            }
            for (int y : v)
            {
                cout << y << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
