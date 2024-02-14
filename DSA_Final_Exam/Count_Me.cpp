#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        string s;
        int mx = 0;
        stringstream ss(sentence);
        map<string, int> mp;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > mx)
            {
                mx = mp[word];
                s = word;
            }
        }

        cout << s << " " << mx << endl;
    }

    return 0;
}
