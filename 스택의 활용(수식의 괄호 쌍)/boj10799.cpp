#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int block = 0;
    stack<char> st;

    char pre = '-';
    for (auto c : s)
    {
        if (c == '(')
        {
            st.push(c);
        }
        else
        {
            if (pre == '-' || pre == ')')
            {
                st.pop();
                block++;
            }
            else
            {
                st.pop();
                block += st.size();
            }
        }
        pre = c;
    }

    cout << block;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}