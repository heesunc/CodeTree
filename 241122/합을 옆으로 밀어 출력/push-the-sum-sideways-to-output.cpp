#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    long long totalSum = 0;

    // 입력받고 합 계산
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        totalSum += numbers[i];
    }

    // 합을 문자열로 변환
    string sumStr = to_string(totalSum);

    // 왼쪽으로 한 칸 이동
    string shiftedSum = sumStr.substr(1) + sumStr[0];

    // 결과 출력
    cout << shiftedSum << endl;

    return 0;
}
