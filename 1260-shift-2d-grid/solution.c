/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes.
 */
int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k,
                int* returnSize, int** returnColumnSizes) {

    int m = gridSize;
    int n = gridColSize[0];
    int total = m * n;

    k = k % total;

    int **ans = (int **)malloc(m * sizeof(int *));
    *returnColumnSizes = (int *)malloc(m * sizeof(int));

    for (int i = 0; i < m; i++) {
        ans[i] = (int *)malloc(n * sizeof(int));
        (*returnColumnSizes)[i] = n;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            int index = i * n + j;

            int newIndex = (index + k) % total;

            int row = newIndex / n;
            int col = newIndex % n;

            ans[row][col] = grid[i][j];
        }
    }

    *returnSize = m;

    return ans;
}
