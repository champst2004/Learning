#include <iostream>
using namespace std;

void bubble(int a[],int len);
void selection(int a[], int len);
void insertion(int a[], int len);
void shell(int a[], int len);

int main()
{
    int len, n, a[len];
    cout << "Enter the number of elements: ";
    cin >> len;

    for(int i = 0; i < len; i++) {
        cin >> a[i];
    }
    cout << "Unsorted array: ";
    for(int i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Shell Sort\n";
    cout << "Enter the sorting method: ";
    cin >> n;

    switch (n)      
    {
    case 1:
        bubble(a,len);
        break;
    case 2:
        selection(a,len);
        break;
    case 3:
        insertion(a,len);
        break;
    case 4:
        shell(a,len);
        break;
    }

    return 0;
}
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

    cout << "Sorted array: ";
    for(int i = 0; i < len; i++){
        cout << a[i] << " ";
    }
}
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
    cout << "Sorted array: ";
    for(int i = 0; i < len; i++){
        cout << a[i] << " ";
    }
}
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

    cout << "Sorted array: ";
    for(int i = 0; i < len; i++){
        cout << a[i] << " ";
    }
}
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

    cout << "Sorted array: ";
    for(int i = 0; i < len; i++){
        cout << a[i] << " ";
    }
}
