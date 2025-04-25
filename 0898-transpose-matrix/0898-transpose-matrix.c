/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int r=matrixSize;
    int c=matrixColSize[0];
    *returnSize=c;
    int **ans=(int **)malloc(c*sizeof(int*));
    *returnColumnSizes=(int *)malloc(c*sizeof(int));
    for(int j=0;j<c;j++)
    {
         ans[j]=(int *)malloc(r*sizeof(int));
        (*returnColumnSizes)[j]=r;
        for(int i=0;i<r;i++)
        {
              ans[j][i]=matrix[i][j];
        }
    }
    return ans;
}