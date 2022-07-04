#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;

    queue<int> q;

    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }

    while (q.size() != 1)
    {
        q.pop();

        if (q.size() == 1)
            break;
        else
        {
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }

    cout << q.front() << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
