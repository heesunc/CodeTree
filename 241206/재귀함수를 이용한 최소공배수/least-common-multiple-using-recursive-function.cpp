#include <iostream>
#include <vector>
using namespace std;

// 최대공약수를 구하는 함수 (유클리드 호제법)
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// 최소공배수를 구하는 함수
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// 배열의 최소공배수를 재귀적으로 계산하는 함수
int findLCM(vector<int>& arr, int n) {
    if (n == 1) return arr[0]; // 배열 크기가 1이면 해당 값 반환
    return lcm(arr[n - 1], findLCM(arr, n - 1)); // 마지막 값과 나머지 값들의 최소공배수 계산
}

int main() {
    int n;
    cin >> n; // 수의 개수 입력
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; // 배열 입력
    }
    cout << findLCM(arr, n) << endl; // 최소공배수 출력
    return 0;
}
