/*
STL list Basic Operations
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mine = {10, 20, 10, 10, 30, 40};
    list<int> newlist;
    newlist = mine;
    list<int> mak = {100, 200, 300, 400, 500};
    newlist.push_back(50);
    newlist.push_front(01);
    newlist.pop_front();
    newlist.insert(next(newlist.begin(), 5), 60);                     //( ekhane next ekta itterator ferot dei)in short : insert at position here 6 is the position where i want to insert//
    newlist.insert(next(newlist.begin(), 5), mak.begin(), mak.end()); // insert a another list at position where i want
    newlist.erase(next(newlist.begin(), 10));                         // delete from a position where i want as like insert
    replace(newlist.begin(), newlist.end(), 100, 600);                // replace here 100 is the value which i wanna replace.600 is the value which i want insert in the position of 100
    replace(newlist.begin(), newlist.end(), 600, 100);
    newlist.remove(500);
    newlist.sort(greater<int>()); // sort at descending order.
    newlist.sort();
    newlist.unique(); // used to remove duplicate in sorted list
    // newlist.reverse();//used for reverse the list

    for (int val : newlist)
    {
        cout << val << endl;
    }

    auto it = find(newlist.begin(), newlist.end(), 30); // Find the value
    if (it == newlist.end())
    {
        cout << "NOT FOUND" << endl;
    }
    else
    {
        cout << "FOUND" << endl;
    }

    return 0;
}
