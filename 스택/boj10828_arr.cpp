// 내가 만든 스택으로 푸는 코드
#include <bits/stdc++.h>
using namespace std;

#define MX 10001

int dat[MX];
int pos = 0;

void solve()
{
    int N;
    cin >> N;

    for (int n = 0; n < N; n++)
    {
        string op;
        cin >> op;

        if (op.compare("push") == 0)
        {
            int X;
            cin >> X;
            dat[pos++] = X;
        }
        else if (op.compare("pop") == 0)
        {
            if (pos == 0)
                cout << -1 << "\n";
            else
                cout << dat[--pos] << "\n";
        }
        else if (op.compare("size") == 0)
            cout << pos << "\n";
        else if (op.compare("empty") == 0)
        {
            if (pos == 0)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (op.compare("top") == 0)
        {
            if (pos == 0)
                cout << -1 << "\n";
            else
                cout << dat[pos - 1] << "\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
