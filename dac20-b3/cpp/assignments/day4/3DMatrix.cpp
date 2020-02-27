#include <iostream>

using namespace std;

const int n = 100;
const int m = 100;
const int p = 50;

void matrix(int (&a)[n][m][p], int row, int col, int l)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j][l];
        }
    }
}

void print(int (&a)[n][m][p], int row, int col, int l)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j][l] << " ";
        }
        cout << "\n";
    }
}

void add(int (&a)[n][m][p], int (&s)[n][m], int row, int col, int height)
{ // int s[n][m]={0};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            for (int g = 0; g < height; g++)
            {
                s[i][j] = s[i][j] + a[i][j][g];
            }
        }
    }
}
void printsum(int (&b)[n][m], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[n][m][p], sum[n][m] = {0}, h;
    cout << "how many matrices you want to add \n";
    cin >> h;

    int row, col;
    cout << "Enter how many rows and column :\n";
    cin >> row >> col;

    for (int y = 0; y < h; y++)
    {
        cout << "Enter the elements of matrix " << y + 1 << "\n";
        matrix(arr, row, col, y);
    }

    for (int k = 0; k < h; k++)
    {
        cout << "Elements of matrix " << k + 1 << "are ..........\n";
        print(arr, row, col, k);
    }

    add(arr, sum, row, col, h);

    cout << "Addition of above arrays are\n";
    printsum(sum, row, col);

    return 0;
}