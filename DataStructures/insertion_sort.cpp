#include <iostream>
using namespace std;
void insertion(int a[], int len){

    for(int i = 1; i < len; i++){
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for(int i = 0; i < len; i++){
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {6, 5, 3, 2, 1, 4};
    int len = 6;
    insertion(a,len);
    return 0;
}