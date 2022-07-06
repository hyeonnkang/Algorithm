#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;

    int good = 0;

    for (int n = 0; n < N; n++)
    {
        string word;
        cin >> word;

        stack<char> st;

        for (char c : word)
        {
            if (st.empty() || st.top() != c)
            {
                st.push(c);
            }
            else
            {
                st.pop();
            }
        }

        if (st.empty())
        {
            good++;
        }
    }

    cout << good;
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}