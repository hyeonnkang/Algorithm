#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;

    deque<int> de;

    for (int n = 0; n < N; n++)
    {
        string op;
        cin >> op;

        if (op.compare("push_front") == 0)
        {
            int x;
            cin >> x;
            de.push_front(x);
        }
        else if (op.compare("push_back") == 0)
        {
            int x;
            cin >> x;
            de.push_back(x);
        }
        else if (op.compare("pop_front") == 0)
        {
            if (de.empty())
                cout << -1 << "\n";
            else
            {
                cout << de.front() << "\n";
                de.pop_front();
            }
        }
        else if (op.compare("pop_back") == 0)
        {
            if (de.empty())
                cout << -1 << "\n";
            else
            {
                cout << de.back() << "\n";
                de.pop_back();
            }
        }
        else if (op.compare("size") == 0)
        {
            cout << de.size() << "\n";
        }
        else if (op.compare("empty") == 0)
        {
            if (de.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (op.compare("front") == 0)
        {
            if (de.empty())
                cout << -1 << "\n";
            else
                cout << de.front() << "\n";
        }
        else if (op.compare("back") == 0)
        {
            if (de.empty())
                cout << -1 << "\n";
            else
                cout << de.back() << "\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}