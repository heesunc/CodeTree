#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> a(10);

    for(int i=0; i<10; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<10; i++)
    {
        if (a[i] % 3 == 0)
        {
            cout << a[i-1] << "\n";
            break;
        }
    }
    return 0;
}