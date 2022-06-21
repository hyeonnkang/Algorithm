#include <bits/stdc++.h>
using namespace std;

int yeongsik(int time[], int N); // 영식 요급제로 했을 때 가격을 반환
int minsik(int time[], int N);   // 민식 요금제 가격 반환

void solve()
{
    int N; // 저번달 이용한 통화의 개수
    cin >> N;

    int time[N]; // 통화시간
    for (int i = 0; i < N; i++)
    {
        cin >> time[i];
    }

    int y = yeongsik(time, N);
    int m = minsik(time, N);

    if (y == m)
    {
        cout << "Y M " << y;
    }
    else if (y < m)
    {
        cout << "Y " << y;
    }
    else
    {
        cout << "M " << m;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}

int yeongsik(int time[], int N)
{
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        int t = time[i];
        int k = (t / 30 + 1) * 10;
        sum += k;
    }

    return sum;
}

int minsik(int time[], int N)
{
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        int t = time[i];
        int k = (t / 60 + 1) * 15;
        sum += k;
    }

    return sum;
}