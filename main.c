#include <stdio.h>

int main() {
    FILE *inputFile = fopen("/Users/bojanangjeleski/CLionProjects/untitled131/matrix.txt", "r");
    FILE *outputFile = fopen("/Users/bojanangjeleski/CLionProjects/untitled131/matrix2.txt", "w");

    int m, n, i, j;
    float matrix[100][100];

    fscanf(inputFile, "%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            fscanf(inputFile, "%f", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            fprintf(outputFile, "%.1f ", matrix[j][i]);
        }
        printf("\n");
    }


    fclose(inputFile);
    fclose(outputFile);
    return 0;
}

/*
1.4. Задача 3
Да се напише програма која ќе ги прочита елементите од една матрица сместена во текстуална датотека matrica1.txt. Во првиот ред од датотеката се запишани бројот на редици и бројот на колони на матрицата. Секој елемент од матрицата е реален број запишан во посебен ред од датотеката. Потоа матрицата треба да се транспонира и да се запише во нова датотека matrica2.txt на истиот начин.

Пример
        Ако датотеката matrica1.txt ја има следнава содржина:

3 4
2.1
3.2
4.3
5.4
1.1
2.2
3.3
4.4
6.0
5.5
3.9
1.8
тогаш по извршувањето на програмата содржината на датотеката matrica2.txt треба да биде следнава:

4 3
2.1
1.1
6.0
3.2
2.2
5.5
4.3
3.3
3.9
5.4
4.4
1.8
 */
