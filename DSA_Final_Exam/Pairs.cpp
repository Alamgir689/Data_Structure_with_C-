/*


*/
#include <bits/stdc++.h>
using namespace std;
class mak
{
public:
    string name;
    int marks;
    mak(string name, int marks)
    {
        this->marks = marks;
        this->name = name;
    }
};
class compare
{
public:
    bool operator()(mak a, mak b)
    {
        if (a.name > b.name)
            return true;
        else if (a.name < b.name)
            return false;
        else
        {
            if (a.marks < b.marks)
                return true;
            else
                return false;
        }
    }
};

// bool compare(mak a, mak b)
// {
//     if (a.name > b.name)
//             return true;
//         else if (a.name < b.name)
//             return false;
//         else
//         {
//             if (a.marks < b.marks)
//                 return true;
//             else
//                 return false;
//         }
// }
int main()
{
    int n;
    cin >> n;
    priority_queue<mak, vector<mak>, compare> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks;
        cin >> name >> marks;
        mak obj(name, marks);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}