#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    // 길이가 다르면 바로 "No" 출력
    if (str1.length() != str2.length()) {
        cout << "No" << endl;
        return 0;
    }

    // 각 문자의 빈도를 저장할 해시맵
    unordered_map<char, int> freq1, freq2;

    // 첫 번째 단어의 문자 빈도 계산
    for (char c : str1) {
        freq1[c]++;
    }

    // 두 번째 단어의 문자 빈도 계산
    for (char c : str2) {
        freq2[c]++;
    }

    // 두 빈도 맵 비교
    if (freq1 == freq2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}