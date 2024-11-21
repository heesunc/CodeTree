#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str; cin >> str;
    int cnt =0;

    for(char c : str)
    {
        if (cnt ==0 && c == 'e')
        {
            cnt++;
            continue;
        }
        cout << c;
    }
    return 0;
}