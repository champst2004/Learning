#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:

    Complex(int, int);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
    cout<<"Hello\n";
}
int main(){
    Complex c(3, 5);
    c.printNumber();
    return 0;
}