/*
Problem Statement:

You will be given a directed graph as input. Then you will receive Q queries. For each query,
you will be given two nodes, A and B.
You need to determine whether you can go from A to B directly without using any other nodes.

Input Format

The first line will contain N and E, the number of nodes and the number of edges, respectively.
The values of the nodes range from 0 to N-1.
Next  E lines will contain two node values which means there is a connection from first node to second node.
The next line will contain Q.
The following Q lines will each contain A and B.

Output Format:

For each query output YES if it is possible to go from A to B directly without using any other nodes,
NO otherwise. Don't forget to put a new line after each query.
Sample Input 0

5 6
0 1
1 2
2 3
3 4
1 4
0 2
10
0 1
1 0
2 2
2 3
0 3
3 0
1 4
4 1
4 3
1 2
Sample Output 0

YES
NO
YES
YES
NO
NO
YES
NO
NO
YES


*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int src, des;
        cin >> src >> des;

        if (mat[src][des] == 1 || mat[src] == mat[des])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
