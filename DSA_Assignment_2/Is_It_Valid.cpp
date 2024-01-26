/*
Problem Statement

Given a string  containing just the characters  and , determine if the input string is valid.

An input string is valid if the string is empty after doing some operatios. The available operations are:

 can delete its previous available character  along with itself. If there is no  available to delete, it will not delete itself.
 can delete its previous available character  along with itself. If there is no  available to delete, it will not delete itself.
Input Format

First line will contain , the number of test cases.
Next  lines will contain the string .
Constraints

. Here  means the length of the string.
Output Format

Output YES if the string is valid, otherwise NO.
Sample Input 0

10
0011
1010
1100
0101
0001
0111
0110
100101
1110010
0001011011
Sample Output 0

YES
YES
YES
YES
NO
NO
YES
YES
NO
YES
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char c : s)
        {

            if (!st.empty() && st.top() == '0' && c == '1')
            {

                st.pop();
            }
            else if (!st.empty() && st.top() == '1' && c == '0')
            {

                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}