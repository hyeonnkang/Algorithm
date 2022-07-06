#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    stack<char> st;

    bool isvps = true;
    for (char c : s)
    {
        if (c == '(')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            if (st.empty())
            {
                isvps = false;
                break;
            }
            else
            {
                st.pop();
                continue;
            }
        }
    }

    if (!st.empty())
        isvps = false;

    if (isvps)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
        solve();
}