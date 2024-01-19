/*
    ***Stack with STL vector***

    Normally STL List Means Built in Library of Doubly Linked List.
*/

#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    myStack st;

    /*  ***Basic Operations***

    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    if (st.empty() == false)
    {
        cout << st.top() << endl;
    }
    */

    // Top and pop korar khetre best practice holo **if(!st.empy)** ei condition diye check kora.
    /*To perform top and pop operations the best practice
    is to check whether the stack is is empty or not with this condition ***if(!stack variable.empy)*** */

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