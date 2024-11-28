#include <iostream>
#include <vector>
using namespace std;

// 함수 정의: 수열 B가 수열 A의 연속 부분 수열인지 판단
bool isSubarray(const vector<int>& A, const vector<int>& B) {
    int n1 = A.size();
    int n2 = B.size();

    // B의 크기가 A보다 크면 연속 부분 수열이 될 수 없음
    if (n2 > n1) return false;

    // 슬라이딩 윈도우로 부분 배열 비교
    for (int i = 0; i <= n1 - n2; ++i) {
        bool isMatch = true;

        // B와 A의 현재 구간 비교
        for (int j = 0; j < n2; ++j) {
            if (A[i + j] != B[j]) {
                isMatch = false;
                break;
            }
        }

        // 일치하는 구간을 찾으면 true 반환
        if (isMatch) return true;
    }

    // 일치하는 구간이 없으면 false 반환
    return false;
}

int main() {
    // 수열 A와 B 입력
    int a,b; cin >> a >> b;

    vector<int> A(a);
    vector<int> B(b);

    for(int i=0; i<a; i++)
    { cin >> A[i]; }
    for(int j=0; j<b; j++)
    { cin >> B[j]; }

    // 결과 출력
    if (isSubarray(A, B)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
