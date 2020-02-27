#include <iostream>
using namespace std;
class Complex
{

public:
    float real, imgen;
    Complex() {}

    Complex(float real, float imgen)
    {
        this->imgen = imgen;
        this->real = real;
    }
    void setReal(float real) { this->real = real; }
    int getReal() { return real; }
    void setImgen(float Imgn) { this->imgen = imgen; }
    int getImgen() { return imgen; }
    Complex add(Complex a)
    {
        cout<<this<<endl;
        return Complex(
            this->real + a.real,
            this->imgen + a.imgen);
    }
    Complex substract(Complex a)
    {
        return Complex(
            this->real - a.real,
            this->imgen - a.imgen);
    }
    bool compare(Complex a)
    {
        if (this->real == a.real && this->imgen == a.imgen)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void printComplex()
    {
        cout << this->real << "+" << this->imgen << "i\n";
    }
    void readComplex()
    {
        float r, i;
        cout << "\n Enter Real: ";
        cin >> r;
        cout << "\n Enter Imegn ";
        cin >> i;
        this->real = r;
        this->imgen = i;
    }
};

void menu()
{

    cout << "\n Enter Your Choice : " << endl
         << endl;
    cout << " 1. Addition" << endl;
    cout << " 2. Substraction" << endl;
    cout << " 3. Compare" << endl;
    cout << " 4. Exit" << endl;
}

int main()
{
    int choice;
    
    do
    {
        menu();
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                cout << "\n Enter two complex number to Add them :" << endl;
                Complex a, b, ans;
                a.readComplex();
                b.readComplex();
                ans = a.add(b);
                cout << "Addition is : ";
                ans.printComplex();
                break;
            }
            case 2:
            {
                cout << "\n Enter two complex number to Substract them :" << endl;
                Complex x, y, sAns;
                x.readComplex();
                y.readComplex();
                sAns = x.substract(y);
                cout << "Substration is : ";
                sAns.printComplex();
                break;
            }
            case 3:
            {
                cout << "\n Enter two complex number to compare :" << endl;
                Complex q, p;
                q.readComplex();
                p.readComplex();
                if(q.compare(p)){
                    cout<<"Same!!";
                }else{
                    cout<<"Not Same!!";
                }
                break;
            }
            case 4:
            {

                exit(0);
                break;
            }

            default:
            {
                cout << "Wrong choice !! \n Exitting ! ......" << endl;
                break;
            }
        };

    } while (true);

    return 0;
}
