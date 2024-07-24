#include <iostream>
using namespace std;

int main()
{
    int a[]= {5,3,4,2,1};
    int len = 5;

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    }
    for(int i = 0; i < len; i++){
        cout << a[i] << " ";
    }
    return 0;
}