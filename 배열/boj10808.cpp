#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    int arr[26];
    fill(arr, arr+26, 0);

    for(int i = 0; i < S.size(); i++){
        char c = S[i];
        arr[c-'a']++;
    }

    for(int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }cout << "\n";
}