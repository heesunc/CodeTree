#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int count = 3;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == 2)
        {
            count--;
        }
        if (count == 0)
        {
            cout << i+1;
            break;
        }
    }

    return 0;
}