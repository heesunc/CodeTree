#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str; cin >> str;

    // 두 번째 문자와 같은 문자들을 모두 첫 번째 문자로 바꾸기
    char c1 = str[0];
    char c2 = str[1];

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == c2)
        {
            str[i] = c1;
        }
    }    

    cout << str;

    return 0;
}