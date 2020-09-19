

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* A, int ASize, int* returnSize){
    *returnSize = ASize;
    int i, l = 0, r = 1, *ans;
    ans = malloc(sizeof(int) * ASize);
    for(i = 0; i < ASize; i++){
        if(A[i] %2 == 0){
            ans[l++] = A[i];
            l++;
        }else{
            ans[r++] = A[i];            
            r++;
        }
    }
    return ans;
}