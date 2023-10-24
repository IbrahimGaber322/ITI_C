#include "array.h"

void calculateColumnAverages(int array[][10], int numRows, int numCols, double averages[]) {
    for (int j = 0; j < numCols; j++) {
        double sum = 0;
        for (int i = 0; i < numRows; i++) {
            sum += array[i][j];
        }
        averages[j] = sum / numRows;
    }
}


void arrayAverage(){



 int array[5][10] =
    {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {12, 22, 32, 42},
        {18, 28, 38, 48},
        {14, 24, 34, 44}
    };

    double averages[COLS];
    calculateColumnAverages(array,ROWS,COLS,averages);
     for (int j = 0; j < COLS; j++) {
        printf("Column %d: %f\n", j + 1, averages[j]);
    }
}
