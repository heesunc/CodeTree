#include <iostream>
#include <vector>
#include <cmath> // pow 함수를 사용하기 위해 추가
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> remainder_count(b, 0); // b개의 요소로 초기화된 배열 생성, 인덱스가 나머지 값에 대응

    // a가 1 이하가 될 때까지 나눗셈 반복
    while (a > 1) {
        int remainder = a % b;
        remainder_count[remainder]++; // 나머지의 등장 횟수 기록
        a /= b; // a를 b로 나눈 몫으로 업데이트
    }

    int result = 0;
    for (int count : remainder_count) {
        result += pow(count, 2); // 각 나머지 등장 횟수의 제곱을 합산
    }

    cout << result << endl;
    return 0;
}