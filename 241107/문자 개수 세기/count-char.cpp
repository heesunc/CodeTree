#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char target;
    getline(cin, str);
    cin >> target;

    int cnt=0;
    for(char c : str)
    {
        if (c == target)
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}