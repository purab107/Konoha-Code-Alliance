#include <iostream>
using namespace std;
int main()
{

    int row;
    cout << "Enter The Number Of Rows : ";
    cin >> row;

    int column;
    cout << "Enter The Number Of Columns : ";
    cin >> column;

    for (int i = 1; i <= row; i++)
    {

        if (i == 1 or i == row)
        {
            for (int j = 1; j <= column; j++)
            {

                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= column; j++)
            {

                if (j == 1 or j == column)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}