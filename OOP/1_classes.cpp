#include <iostream>
using namespace std;

class Student{
    private:
        int a, b, c;
    public:
        int d, e;
        void setdata(int a1, int b1, int c1);
        void getdata(){
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
            cout << d << endl;
            cout << e << endl;
        }
};

void Student :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Student st;
    st.setdata(1, 2, 3);
    st.d = 4;
    st.e = 5;
    //st.a = 44; error because a is pvt
    st.getdata();
    return 0;
}