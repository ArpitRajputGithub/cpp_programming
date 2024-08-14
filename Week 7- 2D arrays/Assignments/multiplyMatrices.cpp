#include <iostream>
using namespace std;

int main()
{
    int rows1, cols1, rows2, cols2;

    cout << "Enter rows of 1st matrix: ";
    cin >> rows1;
    cout << "Enter cols of 1st matrix: ";
    cin >> cols1;

    cout << "Enter rows of 2nd matrix: ";
    cin >> rows2;
    cout << "Enter cols of 2nd matrix: ";
    cin >> cols2;

    if (cols1 != rows2)
    {
        cout << "Matrices can't be multiplied." << endl;
        return 1;
    }

    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int result[rows1][cols2];

    cout << "Enter elements of 1st matrix: " << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of 2nd matrix: " << endl;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    // Multiply matrices
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print resultant matrix
    cout << "Resultant matrix: " << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}