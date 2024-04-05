#include <iostream>
using namespace std;
int main()
{

    int row;
    cout << "Enter Number Of Rows : ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= row - i; j++)
        {

            cout << "  ";
        }

        int a = 65;

        for (int k = 1; k <= i; k++)
        {

            cout << char(a) << " ";
            a++;
        }

        cout << endl;
    }
    return 0;
}