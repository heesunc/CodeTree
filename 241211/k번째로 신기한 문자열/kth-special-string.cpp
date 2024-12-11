#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string T;
    cin >> T;

    vector<string> words(n);

    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    // T로 시작하는 단어 필터링
    vector<string> filtered;
    for (const string& word : words) {
        if (word.substr(0, T.size()) == T) {
            filtered.push_back(word);
        }
    }

    // 사전순 정렬
    sort(filtered.begin(), filtered.end());

    // k번째 단어 출력 (1-based index)
    cout << filtered[k - 1] << endl;

    return 0;
}
