#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int tripletMatrix(int rows, int cols, int matrix[rows][cols], int triplet[][3]) {
    triplet[0][0] = rows;
    triplet[0][1] = cols;
    
    int k = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = matrix[i][j];
                triplet[0][2] = k;
                k++;
            }
        }
    }
    return k - 1; 
}

void displayTriplet(int count, int triplet[][3]) {
    printf("Row\tColumn\tValue\n");
    for (int i = 0; i <= count; i++) {
        printf("%d\t%d\t%d\n", triplet[i][0], triplet[i][1], triplet[i][2]);
    }
}

void transposeTriplet(int count, int triplet[][3], int transposed[][3]){
    transposed[0][0] = triplet[0][1];
    transposed[0][1] = triplet[0][0];
    transposed[0][2] = count;

    int l = 1;
    for(int i = 0; i < triplet[0][1]; i++){
        for(int j = 0; j <= count; j++){
            if(triplet[j][1] == i){
                transposed[l][0] = triplet[j][1];
                transposed[l][1] = triplet[j][0];
                transposed[l][2] = triplet[j][2];
                l++;
            }
        }
    }
}

void fastTranspose(int count, int triplet[][3], int transposed[][3]) {
    int rowTerms[triplet[0][1]], startingPos[triplet[0][1]];

    for (int i = 0; i < triplet[0][1]; i++) {
        rowTerms[i] = 0;
    }

    for (int i = 1; i <= count; i++) {
        rowTerms[triplet[i][1]]++;
    }

    startingPos[0] = 1;
    for (int i = 1; i < triplet[0][1]; i++) {
        startingPos[i] = startingPos[i - 1] + rowTerms[i - 1];
    }

    transposed[0][0] = triplet[0][1];
    transposed[0][1] = triplet[0][0];
    transposed[0][2] = count;

    for (int i = 1; i <= count; i++) {
        int j = startingPos[triplet[i][1]]++;
        transposed[j][0] = triplet[i][1];
        transposed[j][1] = triplet[i][0];
        transposed[j][2] = triplet[i][2];
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    inputMatrix(rows, cols, matrix);
    displayMatrix(rows, cols, matrix);

    int triplet[rows * cols][3];
    int count = tripletMatrix(rows, cols, matrix, triplet);
    printf("Triplet form of the matrix:\n");
    displayTriplet(count, triplet);

    int stransposed[count + 1][3];
    transposeTriplet(count, triplet, stransposed);
    printf("Simple Transpoe form of the matrix:\n");
    displayTriplet(count, stransposed);

    int ftransposed[count + 1][3];
    fastTranspose(count, triplet, ftransposed);
    printf("Fast Transpose form of the matrix:\n");
    displayTriplet(count, ftransposed);

    return 0;
}
