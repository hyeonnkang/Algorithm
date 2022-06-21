#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;

    int num[N];
    for (int i = 0; i < N; i++)
        cin >> num[i];

    int v;
    cin >> v;

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (v == num[i])
            cnt++;
    }

    cout << cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
