#include <bits/stdc++.h>
using namespace std;

#define MX 500001

stack<pair<int, int>> t;

void solve()
{
    int N; // 탐의 수
    cin >> N;

    t.push({100000001, 0});
    for (int i = 1; i <= N; i++)
    {
        int h;
        cin >> h;
        while (t.top().first < h)
        {
            t.pop();
        }
        cout << t.top().second << " ";
        t.push({h, i});
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}