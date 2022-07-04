#include <bits/stdc++.h>
using namespace std;

#define MX 2000001

int dat[MX];
int head = 0;
int tail = 0;

void solve()
{
    int N;
    cin >> N;

    fill(dat, dat + MX, 0);

    for (int n = 0; n < N; n++)
    {
        string op;
        cin >> op;

        if (op.compare("push") == 0)
        {
            int x;
            cin >> x;
            dat[tail++] = x;
        }
        else if (op.compare("pop") == 0)
        {
            if (tail - head == 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << dat[head++] << "\n";
            }
        }
        else if (op.compare("size") == 0)
        {
            cout << tail - head << "\n";
        }
        else if (op.compare("empty") == 0)
        {
            if (tail - head == 0)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (op.compare("front") == 0)
        {
            if (tail - head != 0)
                cout << dat[head] << "\n";
            else
                cout << -1 << "\n";
        }
        else if (op.compare("back") == 0)
        {
            if (tail - head != 0)
                cout << dat[tail - 1] << "\n";
            else
                cout << -1 << "\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
