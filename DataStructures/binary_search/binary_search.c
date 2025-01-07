#include <stdio.h>

int binarySearch(int arr[], int l, int r, int key){
    while (l <= r){
        int mid = (l+r)/2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key)l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int binarySearchRec(int arr[],int l, int r, int key){
    while (l <= r){
        int mid = (l+r)/2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) return binarySearchRec(arr, mid + 1, r, key);
        else return binarySearchRec(arr, l, mid - 1, key);
    }
    return -1;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 1; i < 11; i++){
        printf("%d\n", binarySearch(arr, 0, 10, i));
    }

    for(int i = 1; i < 11; i++){
        printf("%d\n", binarySearchRec(arr, 0, 10, i));
    }

    return 0;
}