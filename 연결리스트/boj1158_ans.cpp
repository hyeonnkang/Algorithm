#include <bits/stdc++.h>
using namespace std;

#define MX 5001

int dat[MX];
int pre[MX];
int nxt[MX];
int unused = 1;

void solve()
{
    fill(dat, dat + MX, -1);
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);

    int N, K;
    cin >> N >> K;

    int addr = 0; // 이전 원소의 인덱스
    for (int i = 1; i <= N; i++)
    {
        dat[i] = i;
        pre[i] = (i == 1) ? N : i - 1;
        nxt[i] = (i == N) ? 1 : i + 1;
    }

    vector<int> v; // 요세푸스 순열을 넣을 벡터

    int rem = 0;
    int cnt = 1;
    for (int i = 1; rem < N; i = nxt[i])
    {
        if (cnt == K)
        {
            pre[nxt[i]] = pre[i];
            nxt[pre[i]] = nxt[i];
            v.push_back(i);
            rem++;
            cnt = 1;
        }
        else
        {
            cnt++;
        }
    }

    cout << "<";
    for (size_t i = 0; i < v.size(); i++)
    {
        if (i != v.size() - 1)
            cout << v[i] << ", ";
        else
            cout << v[i] << ">";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
