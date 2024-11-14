#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[3][3];
    int arr2[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int num = 2;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            arr2[i][j] = num;
            num += 1;
        }
    }

    int result[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            result[i][j] = arr[i][j] * arr2[i][j];
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}