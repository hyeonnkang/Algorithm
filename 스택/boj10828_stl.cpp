#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;

    stack<int> st;

    for (int n = 0; n < N; n++)
    {
        string op;
        cin >> op;

        if (op.compare("push") == 0)
        {
            int X;
            cin >> X;

            st.push(X);
        }
        else if (op.compare("pop") == 0)
        {
            if (st.empty())
                cout << -1 << "\n";
            else
            {
                cout << st.top() << "\n";
                st.pop();
            }
        }
        else if (op.compare("size") == 0)
            cout << st.size() << "\n";
        else if (op.compare("empty") == 0)
        {
            if (st.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (op.compare("top") == 0)
        {
            if (st.empty())
                cout << -1 << "\n";
            else
                cout << st.top() << "\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
