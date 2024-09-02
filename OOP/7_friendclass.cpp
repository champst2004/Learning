#include <iostream>
using namespace std;

class Complex;      // Forward declaration

class Calculator{
public:
    int add(int a, int b){
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Calculator2{
public:
    int add(int a, int b){
        return (a + b);
    }

    int sumReal(Complex, Complex);
    int sumComp(Complex, Complex);
};

class Complex{
    int a, b;
    // Individually declaring functions as friends
    friend int Calculator ::sumRealComplex(Complex, Complex);
    friend int Calculator ::sumCompComplex(Complex, Complex);

    // Declaring the entire calculator class as friend
    friend class Calculator2;

public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }

    void printNumber(){
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return (o1.a + o2.a);
}

int Calculator :: sumCompComplex(Complex o1, Complex o2){
    return (o1.b + o2.b);
}

int Calculator2 :: sumReal(Complex o1, Complex o2){
    return (o1.a + o2.a);
}

int Calculator2 :: sumComp(Complex o1, Complex o2){
    return (o1.b + o2.b);
}

int main(){
    Complex o1, o2;
    o1.setNumber(4, 9);
    o2.setNumber(2, 3);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;

    Calculator2 calc2;
    int res2 = calc2.sumReal(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res2 << endl;
    int resc2 = calc2.sumComp(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc2 << endl;
    return 0;
}