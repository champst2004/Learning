#include<stdio.h>
int main()
{
    int r, c, count = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter value of element %d%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered matrix is: \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d\t", a[i][j]);
            if(j == c - 1){
                printf("\n");
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] != 0){
                count++;
            }
        }
    }
    printf("No of non 0 elements are : %d\n", count);


    int triplet[count + 1][3];

    triplet[0][0] = r;
    triplet[0][1] = c;
    triplet[0][2] = count;


    int k = 1;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] != 0){
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = a[i][j];
                k++;
            }
        }
    }

    printf("Triplet form is: \n");
    for(int i = 0; i < count + 1; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t",triplet[i][j]);
            if(j == 2){
                printf("\n");
            }
        }
    }

    return 0;
}