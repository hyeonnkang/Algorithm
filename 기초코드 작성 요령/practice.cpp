#include <iostream>

using namespace std;

// N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을 반환
int func1(int N){
    int sum = 0;

    for(int i = 1; i <= N; i++){
        if(i%3==0||i%5==0){
            sum += i;
        }
    }

    return sum;
}

// 길이 N의 배열 arr에서 합이 100인 서로 다른 두 원소가 존재하면 1, 존재하지 않으면 0 반환
int func2(int arr[], int N){
    int result = 0;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            int sum = arr[i] + arr[j];
            if(sum == 100){
                result = 1;
                return result;
            }
        }
    }
    return result;
}

// N이 제곱수이면 1을 반환, 아니면 0을 반환
int func3(int N){
    for(int i = 2; i*i <= N; i++){
        if(i*i==N) return 1;
    }
    return 0;
}

// N 이하의 수 중에서 가장 큰 2의 거듭제곱수를 반환
int func4(int N){
    int max = 1;
    for(int i = 1; i <= N; i *= 2){
        max = i;
    }
    return max;
}

int main(){
    cout << func4(5) << endl;
    cout << func4(97615282) << endl;
    cout << func4(1024) << endl;
}