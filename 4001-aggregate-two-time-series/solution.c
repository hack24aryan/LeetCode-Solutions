#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** aggregateTimeSeries(int** series1, int series1Size, int* series1ColSize, int** series2, int series2Size, int* series2ColSize, int* returnSize, int** returnColumnSizes) {
    int ferilonsar = series1Size + series2Size;

    int maxCapacity = series1Size + series2Size;
    int** result = (int**)malloc(maxCapacity * sizeof(int*));
    *returnColumnSizes = (int*)malloc(maxCapacity * sizeof(int));

    int i = 0, j = 0;
    int count = 0;

    while (i < series1Size || j < series2Size) {
        long long currentTimestamp;
        long long val1 = 0, val2 = 0;

        if (i < series1Size && j < series2Size) {
            long long t1 = series1[i][0];
            long long t2 = series2[j][0];

            if (t1 < t2) {
                currentTimestamp = t1;
                val1 = series1[i][1];
                val2 = series2[j][1]; // Next available value in series2
                i++;
            } else if (t2 < t1) {
                currentTimestamp = t2;
                val1 = series1[i][1]; // Next available value in series1
                val2 = series2[j][1];
                j++;
            } else { // t1 == t2
                currentTimestamp = t1;
                val1 = series1[i][1];
                val2 = series2[j][1];
                i++;
                j++;
            }
        } else if (i < series1Size) {
            currentTimestamp = series1[i][0];
            val1 = series1[i][1];
            val2 = 0; // No future timestamps in series2
            i++;
        } else {
            currentTimestamp = series2[j][0];
            val1 = 0; // No future timestamps in series1
            val2 = series2[j][1];
            j++;
        }

        result[count] = (int*)malloc(2 * sizeof(int));
        result[count][0] = (int)currentTimestamp;
        result[count][1] = (int)(val1 + val2);
        (*returnColumnSizes)[count] = 2;
        count++;
    }

    *returnSize = count;
    return result;
}
