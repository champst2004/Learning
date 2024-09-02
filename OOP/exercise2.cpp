#include <iostream>
using namespace std;

class simpleCalc{
    public:
        int a, b;
        void set_num1(int m, int n){
            a = m;
            b = n;
        }
        void displayRes1(){
            cout << a << " + " << b << " = " << a + b << endl;
            cout << a << " - " << b << " = " << a - b << endl;
            cout << a << " x " << b << " = " << a * b << endl;
            cout << a << " / " << b << " = " << a / b << endl;
        }
};

class sciCalc{
    public:
        int a, b;
        void set_num2(int m, int n){
            a = m;
            b = n;
        }
        void displayRes2(){
            cout << "The cube of " << a << " = " << a*a*a << endl;
            cout << "The cube of " << b << " = " << b*b*b << endl;
        }
};

class hybridCalc : public simpleCalc, public sciCalc{
    public:
        void set_num(int x, int y){
            set_num1(x, y);
            set_num2(x, y);
        }
        void displayRes(){
            displayRes1();
            displayRes2();
        }

};

int main()
{
    hybridCalc num;
    num.set_num(10, 5);
    num.displayRes();
    return 0;
}