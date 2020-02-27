#include <iostream>
using namespace std;
class Matrix
{

    int a[100][100], b[100][100], n;

public:
    Matrix()
    {

        cout << "How many elements do you want in a matrix?\n";
        cin >> n;
    }
    void getMatrix()
    {
        cout << " Enter elements for first matrix\n";
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
            }
        }
        cout << " Enter elements for second matrix \n";
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> b[i][j];
            }
        }
    }
    void Add()
    {
        cout << "Addition is" << endl;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << a[i][j] + b[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix m;
    m.getMatrix();
    m.Add();
    return 0;
}