#include <bits/stdc++.h>

using namespace std;

int N, X;
vector<int> A;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> X;

    int x;
    for(int i = 0; i < N; i++){
        cin >> x;
        A.push_back(x);
    }

    for(int i = 0; i < N; i++){
        if(A[i] < X) cout << A[i] << " ";
    }cout << "\n";
}