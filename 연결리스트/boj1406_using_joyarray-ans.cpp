#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000

char dat[MAX] = {
    -1,
};
int pre[MAX] = {
    -1,
};
int nxt[MAX] = {
    1,
};
int unused = 1;

void insert(int addr, int num)
{
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];

    if (nxt[addr] != -1)
        pre[nxt[addr]] = unused;
    nxt[addr] = unused;

    unused++;
}

void erase(int addr)
{
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1)
        pre[nxt[addr]] = pre[addr];
}

void solve()
{
    fill(pre, pre + MAX, -1);
    fill(nxt, nxt + MAX, -1);

    string s;
    cin >> s;

    int cursor = 0;

    for (auto c : s)
    {
        dat[unused] = c;
        pre[unused] = cursor;
        nxt[unused] = -1;

        nxt[cursor] = unused;
        cursor = unused;
        unused++;
    }
    int M;
    cin >> M;
    // M개의 명령 수행
    for (int m = 0; m < M; m++)
    {
        char C;
        cin >> C;

        char add; // 새로 추가하는 문자

        int pre_cursor;

        switch (C)
        {
        case 'L':
            // 커서가 맨 앞이 아닐 경우 한 칸 앞으로
            if (pre[cursor] != -1)
            {
                cursor = pre[cursor];
            }
            break;
        case 'D':
            // 커서가 맨 뒤가 아닐 경우 한 칸 뒤로
            if (nxt[cursor] != -1)
            {
                cursor = nxt[cursor];
            }
            break;
        case 'B':
            // 커서가 맨 앞이 아닐 경우 왼쪽 문자를 삭제
            if (pre[cursor] != -1)
            {
                // cursor--;
                erase(cursor);
                cursor = pre[cursor];
            }
            break;
        case 'P':
            // 커서 뒤에 문자를 추가
            cin >> add;
            pre_cursor = cursor;
            insert(cursor, add);
            cursor = nxt[pre_cursor];
            break;
        }
    }

    cursor = nxt[0];
    for (; cursor != -1; cursor = nxt[cursor])
    {
        cout << dat[cursor];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
