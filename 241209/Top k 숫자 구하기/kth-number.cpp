#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; int target; cin >> n >> target;

    vector<int> arr(n+1);
    for(int i=1; i<n+1; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << arr[target];

    return 0;
}