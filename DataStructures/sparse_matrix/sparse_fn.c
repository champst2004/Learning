#include<stdio.h>
#define Row 10
#define Col 10

void acceptMatrix(int a[Row][Col], int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter value of element %d%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void displayMatrix(int a[Row][Col], int r, int c){
    printf("Entered matrix is: \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d\t", a[i][j]);
            if(j == c - 1){
                printf("\n");
            }
        }
    }
}

void compact(int a[Row][Col], int r, int c, int sparse[Row][3]){
    int count;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] != 0){
                count++;
            }
        }
    }
    printf("No. of non 0 elements are : %d\n", count);

}

int main()
{
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    acceptMatrix(a, r, c);
    displayMatrix(a, r, c);

    int sparse[3][3];

    compact(a, r, c, sparse);

    return 0;
}