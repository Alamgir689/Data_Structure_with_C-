/*
Problem Statement

You will be given a list  of size . Then you will be given  queries, for each query there will be some commands. Commands are given below -

  -> Insert  into the list. Then print the current minimum value from the list.
 -> Print the current minimum value from the list.
 -> Delete the current minimum value from the list and print the minimum value from the list after deletion.
Note: If the list is empty and you can't print anything then you should print "Empty".

Input Format

First line will contain .
Second line will contain the list  of size .
Third line will contain .
Next  lines will contain the commands.
Constraints

 ; Here  means the values of the list .
Output Format

For each command, print as asked from the list.
Sample Input 0

4
10 -10 -5 -20
10
1
2
2
2
2
0 10
1
2
0 20
1
Sample Output 0

-20
-10
-5
10
Empty
10
10
Empty
20
20
Sample Input 1

6
45 -30 83 -99 19 75
9
1
2
2
0 32
0 6
2
2
0 -86
1
Sample Output 1

-99
-30
19
19
6
19
32
-86
-86
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int q;
    cin >> q;
    while (q--)
    {

        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (c == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (c == 2)
        {

            if (!pq.empty())
            {
                pq.pop();

                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
                // cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}