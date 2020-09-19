

bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize){
    int i, j;
    int *prev = (int *)malloc(sizeof(int) * matrixColSize[0]);
    for(i = 0; i < matrixSize; i++){
        for(j = 0; j < matrixColSize[i]; j++){
            if(i > 0){
                if((j < matrixColSize[i] - 1) && prev[j] != matrix[i][j + 1]){
                    return false;
                }
            }
            prev[j] = matrix[i][j];
        }
    }
    return true;
}