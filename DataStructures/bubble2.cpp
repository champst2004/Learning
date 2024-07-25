#include <iostream>
using namespace std;

void bubble(int a[],int len){
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
}

int main()
{
    int a[] = {2, 3, 1};
    bubble(a,3);
    return 0;
}