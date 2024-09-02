#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(j), a(i+b)    error as a is initialized first (at line 6)
    // Test(int i, int j) : b(j), a(i)      works
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(1, 2);
    return 0;
}