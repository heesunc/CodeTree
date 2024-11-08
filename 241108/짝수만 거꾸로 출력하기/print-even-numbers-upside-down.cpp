#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    vector<int> a;
    int b;
    for(int i=0; i<n; i++)
    {
        cin >> b;
        if (b % 2 == 0)
        {
            a.push_back(b);
        } 
    }

    for(int i : a)
    {
        cout << a[i] << " ";
    }


    return 0;
}