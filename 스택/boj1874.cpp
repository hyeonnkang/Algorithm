#include <bits/stdc++.h>
using namespace std;

#define MX 100001

int dat[MX];
int pos = 0;

void solve()
{
    int n;
    cin >> n;

    int num = 0; // 스택에 넣은 수들 중 가장 큰 수

    vector<char> result;
    bool make = true;

    for (int r = 0; r < n; r++)
    {
        int x;
        cin >> x;

        if (num < x)
        {
            // x까지 숫자를 스택에 넣기
            for (int k = num + 1; k <= x; k++)
            {
                dat[pos++] = k;
                num++;
                result.push_back('+');
            }
            // x 빼기
            pos--;
            result.push_back('-');
        }
        else
        {
            if (dat[pos - 1] == x)
            {
                pos--;
                result.push_back('-');
            }
            else
            {
                make = false;
                break;
            }
        }
    }

    if (make)
    {
        vector<char>::iterator it = result.begin();
        for (; it != result.end(); it++)
        {
            cout << *it << "\n";
        }
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
