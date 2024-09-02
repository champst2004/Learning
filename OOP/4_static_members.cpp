#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){          //static function can only use static variables
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();
    Employee::getCount();        //directly accessed from class

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}