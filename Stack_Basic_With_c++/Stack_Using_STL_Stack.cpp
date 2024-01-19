/*
      ***Stack with STL Stack***

    Normally STL Stack Means Built in Library of Stack.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    /* for short to check false  we can use-> while(!st.empty())
    or checking true we can use normal function calling as like-> while(st.empty()) */
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}