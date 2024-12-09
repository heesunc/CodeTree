#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    for(int i : arr) { cout << i << " "; } cout << "\n";

    sort(arr.begin(), arr.end(), greater<int>());
    for(int i : arr) { cout << i << " "; }

    return 0;
}