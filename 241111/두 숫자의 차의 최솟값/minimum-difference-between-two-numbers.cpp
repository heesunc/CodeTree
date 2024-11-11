#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 오름차순으로 주어졌으므로 인접한 값들만 비교하면 최소 차이를 찾을 수 있습니다.
    int min_diff = abs(a[1] - a[0]);

    for(int i = 1; i < n - 1; i++) {
        int diff = abs(a[i + 1] - a[i]);
        if(diff < min_diff) {
            min_diff = diff;
        }
    }

    cout << min_diff << endl;

    return 0;
}