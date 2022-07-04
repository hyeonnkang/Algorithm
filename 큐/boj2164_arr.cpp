#include <bits/stdc++.h>
using namespace std;

#define MX 1000005

int dat[MX];
int head = 0;
int tail = 0;

void insert(int num)
{
    dat[tail++] = num;
}

void solve()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        insert(i);
    }

    while (tail - head != 1)
    {
        head++;
        if (tail - head == 1)
            break;
        else
        {
            dat[tail++] = dat[head++];
        }
    }

    cout << dat[head];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
