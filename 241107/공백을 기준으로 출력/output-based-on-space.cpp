#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    getline(cin, str);

    string str2;
    getline(cin, str2);

    for(char c : str)
    {
        if (c != ' ')
        {
            cout << c;
        }
    }

    for(char c : str2)
    {
        if (c != ' ')
        {
            cout << c;
        }
    }
    return 0;
}