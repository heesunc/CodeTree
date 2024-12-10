#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a =0; int b =0;
    int a1=0; int b1=0;
    string str1; cin >> str1;
    string str2; cin >> str2;

    if(str1.length() != str2.length())
    {
        cout << "No";
        return 0;
    }

    for(char c : str1)
    {
        if (c == 'a')
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    for(char c : str2)
    {
        if (c == 'a')
        {
            a1++;
        }
        else
        {
            b1++;
        }
    }

    if (a == a1 && b == b1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}