#include <iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setid(void){
            salary = 29;
            cout << "Enter id\n";
            cin >> id;
        }
        void getid(void){
            cout << "the id of this employee is " << id << endl;
        }
};

int main()
{
    Employee hehe[4];

    for(int i = 0; i < 4; i++){
        hehe[i].setid();
        hehe[i].getid();
    }
    return 0;
}