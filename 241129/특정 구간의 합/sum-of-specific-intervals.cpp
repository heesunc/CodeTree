#include <iostream>
#include <string>
#include <vector>
using namespace std;

int sum = 0;
int n, m = 0;
int a1, a2 = 0;
vector<int> arr;

int result(int m, int &a1, int &a2)
{
    while (m--)
    {
        sum = 0;
        cin >> a1 >> a2;
        for (int i = a1; i <= a2; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
}

int main() {
    cin >> n >> m;
    arr.resize(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        int rresult = result(m, a1, a2);
        cout << rresult << "\n";
    }

    return 0;
}
