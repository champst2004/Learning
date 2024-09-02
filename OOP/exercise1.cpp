#include <iostream>
#include <math.h>
using namespace std;
//dist bw 2 points
class Point{
    int x, y;
    friend void dist(Point o1, Point o2);
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }      
};

void dist(Point o1, Point o2){
            int a = sqrt((o2.x - o1.x) * (o2.x - o1.x) + (o2.y - o1.y) * (o2.y - o1.y));
            cout << a << endl;
        }

int main()
{
    Point o1(7, 9);
    Point o2(1, 1);
    dist(o1, o2);
    return 0;
}