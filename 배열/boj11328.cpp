#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;

    for (int n = 0; n < N; n++)
    { // 테스트 케이스만큼 반복
        string a, b;
        cin >> a >> b;

        if (a.length() != b.length())
        {
            cout << "Impossible\n";
            continue;
        }

        int box[26] = {0};

        bool same = true;
        for (auto c : a)
        {
            box[c - 'a']++;
        }

        for (auto c : b)
        {
            if (box[c - 'a'] <= 0)
            {
                same = false;
                break;
            }
            box[c - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (box[i] != 0)
            {
                same = false;
                break;
            }
        }

        if (same)
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
