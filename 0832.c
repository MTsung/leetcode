

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes){
    int i, j;
    *returnSize = ASize;
    int **ans = (int **)malloc(*returnSize * sizeof(int *));
    *returnColumnSizes = (int *)malloc(ASize * sizeof(int));
    for(i = 0; i < ASize; i++){
        (*returnColumnSizes)[i] = AColSize[i];
        ans[i] = malloc((*returnColumnSizes)[i] * sizeof(int));
        for(j = 0; j < AColSize[i]; j++){
            ans[i][j] = A[i][AColSize[i] - j - 1];
            ans[i][j] = ans[i][j] ? 0 : 1;
        }
    }
    return ans;
}