/*
    ***Stack with STL Vector***

    Normally STL VECTOR Means Built in Dynamic Array Library.
*/

#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
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

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (st.empty() == false)
    /* for short to check falseuse we can use-> while(!st.empty())
    or checking true we can use normal function calling as like-> while(st.empty()) */
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}