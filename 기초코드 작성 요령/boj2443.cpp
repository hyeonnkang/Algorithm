#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        // i번만큼 공백 출력
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }

        // 2*N-(i+1)번만큼 * 출력
        for (int k = 0; k < 2 * N - (2 * i + 1); k++)
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