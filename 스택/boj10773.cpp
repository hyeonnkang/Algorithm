#include <bits/stdc++.h>
using namespace std;

#define MX 100001

int dat[MX];
int pos = 0;

void solve()
{
    int K;
    cin >> K;

    for (int k = 0; k < K; k++)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            pos--;
        }
        else
        {
            dat[pos++] = x;
        }
    }

    int sum = 0;
    for (int i = 0; i < pos; i++)
    {
        sum += dat[i];
    }
    cout << sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
