#include <iostream>
using namespace std;
void shell(int a[], int len){

    for (int gap = len/2; gap > 0; gap /= 2) {  
        for (int i = gap; i< len; i++) {  
            int temp = a[i];  
            int j;  
            for (j = i; j >= gap &&a[j - gap] > temp; j -= gap) {  
                a[j] = a[j - gap];  
                }  
            a[j] = temp;  
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
    shell(a,len);
    return 0;
}
