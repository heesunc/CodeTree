#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b; cin >> a >> b;
    int arr1[a][b];
    int arr2[a][b];

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin >> arr1[i][j];
        }
    }

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin >> arr2[i][j];
        }
    }

    
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if (arr1[i][j] == arr2[i][j])
            {
                arr1[i][j] = 0;
            }
            else if (arr1[i][j] != arr2[i][j])
            {
                arr1[i][j] = 1;
            }
        }
    }
    

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}