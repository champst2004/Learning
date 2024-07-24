#include <iostream>
using namespace std;

void bubble(int a[],int len){
    int i;
    bool swapped;
    do{
        swapped = false;
        for(int j = 0; j < len - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
    }while(swapped);

    for(int i = 0; i < len; i++){
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {6, 5, 3, 2, 1, 4};
    int len = 6;
    bubble(a,len);
    return 0;
}