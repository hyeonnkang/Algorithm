#include <bits/stdc++.h>
using namespace std;

void solve()
{
    list<char> li;

    string s;
    cin >> s;

    list<char>::iterator it = li.begin();

    for (auto c : s)
    {
        if (c == '-')
        {
            if (it != li.begin())
            {
                it--;
                it = li.erase(it);
            }
        }
        else if (c == '<')
        {
            if (it != li.begin())
            {
                it--;
            }
        }
        else if (c == '>')
        {
            if (it != li.end())
            {
                it++;
            }
        }
        else
        {
            li.insert(it, c);
        }
    }

    for (auto c : li)
    {
        cout << c;
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
        solve();
}
