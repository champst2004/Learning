#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    //Complex c1;
    //Complex *ptr = &c1;
    Complex *ptr = new Complex;
    Complex *ptr2 = new Complex;

    (*ptr).setData(3, 25);
    (*ptr).getData();

    ptr2->setData(4, 12);
    ptr2->getData();

    return 0;
}