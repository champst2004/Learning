#include <iostream>
using namespace std;

void selection(int a[], int len){
    for(int i = 0; i < (len - 1); i++){
        int pos = i;
        for(int j = i + 1; j < len; j++){
            if(a[j] < a[pos]){
                pos = j;
            }
            }
    if(pos != i){
        swap(a[i],a[pos]);
        }
    }
    for(int i = 0; i < len; i++){
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {6, 5, 3, 2, 1, 4};
    int len = 6;
    selection(a,len);
    return 0;
}