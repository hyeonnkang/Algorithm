#include <bits/stdc++.h>
using namespace std;

void solve()
{
    while (true)
    {
        // 여러 줄에 걸쳐 입력받기
        string s;
        getline(cin, s);

        while (s[s.size() - 1] != '.')
        {
            string x;
            getline(cin, x);

            s += x;
        }

        // 종료조건이 들어왔을 경우 반복문 탈출
        if (s.size() == 1 && s.compare(".") == 0)
        {
            break;
        }

        bool result = true;

        stack<char> st; // [, (을 넣을 스택
        for (auto c : s)
        {
            if (c == '[' || c == '(')
            {
                st.push(c);
            }
            else if (c == ']' || c == ')')
            {
                if (c == ']')
                {
                    if (st.empty() || st.top() != '[')
                    {
                        result = false;
                        break;
                    }
                    st.pop();
                }
                else if (c = ')')
                {
                    if (st.empty() || st.top() != '(')
                    {
                        result = false;
                        break;
                    }
                    st.pop();
                }
                else
                {
                    result = false;
                    break;
                }
            }
            else
                continue; // 그냥 일반 문자일 경우 패스
        }

        if (!st.empty())
            result = false;

        if (result)
        {
            cout << "yes"
                 << "\n";
        }
        else
        {
            cout << "no\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}