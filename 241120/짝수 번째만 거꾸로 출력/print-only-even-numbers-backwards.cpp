#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str; cin >> str;
    vector<char> v;

    // 짝수 번째 문자(0-based index에서 홀수 번째 문자)만 수집
    for (int i = 1; i < str.length(); i += 2) {
        v.push_back(str[i]);
    }

    // 벡터의 역순 출력
    reverse(v.begin(), v.end()); // <algorithm> 필요
    for (char c : v) {
        cout << c;
    }

    return 0;
}