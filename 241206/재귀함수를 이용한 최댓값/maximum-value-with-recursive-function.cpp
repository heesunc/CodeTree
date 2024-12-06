#include <iostream>
#include <vector>
#include <algorithm> // for max function

using namespace std;

// 재귀함수를 이용한 최대값 찾기
int findMax(const vector<int>& arr, int n) {
    // base case: 배열의 크기가 1인 경우 해당 원소를 반환
    if (n == 1) {
        return arr[0];
    }
    // 현재 원소와 나머지 원소들 중 최대값 비교
    return max(arr[n - 1], findMax(arr, n - 1));
}

int main() {
    int n;
    cin >> n; // 원소의 개수 입력

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; // 원소 입력
    }

    // 재귀함수를 이용해 최댓값 계산
    int maxVal = findMax(arr, n);
    cout << maxVal << endl; // 결과 출력

    return 0;
}
