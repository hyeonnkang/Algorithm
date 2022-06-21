#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // 입력받기
    int num[9];
    for (int i = 0; i < 9; i++)
        cin >> num[i];

    // 합이 100인 7명 찾기
    int all_sum = 0; // 9 명의 합
    for (int i = 0; i < 9; i++)
    {
        all_sum += num[i];
    }

    // 2명을 뺀 값이 100인 것을 찾기
    bool find = false;
    int a, b; // 2명에 해당하는 인덱스
    for (int i = 0; i < 9; i++)
    {
        int x = 0;
        for (int j = i + 1; j < 9; j++)
        {
            x = num[i] + num[j];
            if (all_sum - x == 100)
            { // 2명을 찾았다면
                find = true;
                a = i;
                b = j;
                break;
            }
        }
        if (find)
            break;
    }

    int child[7]; // 일곱 난쟁이
    int idx = 0;
    for (int i = 0; i < 9; i++)
    {
        if (i != a && i != b)
        {
            child[idx] = num[i];
            idx++;
        }
    }

    // 정렬하기
    for (int i = 0; i < 7; i++)
    {
        int min_idx = i;
        for (int j = i; j < 7; j++)
        {
            if (child[min_idx] > child[j])
            {
                min_idx = j;
            }
        }

        int tmp = child[i];
        child[i] = child[min_idx];
        child[min_idx] = tmp;
    }

    for (int i = 0; i < 7; i++)
        cout << child[i] << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}