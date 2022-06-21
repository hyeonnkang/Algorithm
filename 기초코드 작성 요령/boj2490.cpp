#include <bits/stdc++.h>
using namespace std;

void solve(){
    int arr[3][4];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    char result[3];

    int cnt = 0;    // 배의 개수
    for(int i = 0; i < 3; i++){
        cnt = 0;
        for(int j = 0; j < 4; j++){
            if(!arr[i][j]) cnt++;
        }

        switch(cnt){
            case 0: 
                result[i] = 'E';
                break;
            case 1:
                result[i] = 'A';
                break;
            case 2:
                result[i] = 'B';
                break;
            case 3:
                result[i] = 'C';
                break;
            case 4:
                result[i] = 'D';
                break;
        }
    }

    for(int i = 0; i < 3; i++){
        cout << result[i] << "\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}