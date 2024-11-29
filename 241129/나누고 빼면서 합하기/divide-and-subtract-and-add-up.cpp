#include <iostream>
#include <string>
#include <vector>
using namespace std;

int sum = 0;
int n, m=0;
vector<int> arr;

int result(int m)
{
    while (m >= 1)
    {
        sum += arr[m];

        if (m % 2 != 0)
        {
            m -= 1;
        }
        else
        {
            m /= 2;
        }
    }
    return sum;
}

int main() {
    cin >> n >> m;
    arr.resize(n + 1);
     
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int rresult = result(m);

    cout << rresult;

    return 0;
}
