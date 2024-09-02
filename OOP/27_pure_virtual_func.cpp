#include<iostream>
using namespace std;

class BaseClass{        //abstract base class
    public:
        int var_base=1;
        virtual void display()=0;       //pure virtual fn
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

class D2 : public BaseClass{
    
};

int main(){
    BaseClass * base_class_pointer;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    // D2 obj;     error because there is no display() in D2
    return 0;
}