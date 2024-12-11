#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr; // 벡터 크기를 동적으로 관리

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        arr.push_back(x); // 입력 값 추가

        if (i % 2 != 0) { // 홀수번째 입력일 때만 중앙값을 계산
            // 현재까지 입력된 값들만 정렬
            vector<int> temp = arr; // 복사본 생성
            sort(temp.begin(), temp.end());

            // 중앙값 출력 (temp.size()는 항상 홀수)
            cout << temp[temp.size() / 2] << " ";
        }
    }

    return 0;
}
