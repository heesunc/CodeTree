#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int cnt =0;
    for(int i=0; i<n; i++)
    {
        if (arr1[i] == arr2[i])
        {
            cnt++;
        }
    }

    if(cnt == n)
    {
        cout << "Yes";
    }
    else cout << "No";

    return 0;
}