#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;

    queue<int> que;

    for (int n = 0; n < N; n++)
    {
        string op;
        cin >> op;

        if (op.compare("push") == 0)
        {
            int x;
            cin >> x;
            que.push(x);
        }
        else if (op.compare("pop") == 0)
        {
            if (!que.empty())
            {
                int x = que.front();
                que.pop();
                cout << x << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else if (op.compare("size") == 0)
        {
            cout << que.size() << "\n";
        }
        else if (op.compare("empty") == 0)
        {
            if (que.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (op.compare("front") == 0)
        {
            if (!que.empty())
            {
                int x = que.front();
                cout << x << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else if (op.compare("back") == 0)
        {
            if (!que.empty())
            {
                int x = que.back();
                cout << x << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
