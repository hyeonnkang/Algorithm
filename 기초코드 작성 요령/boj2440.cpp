#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;

    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}