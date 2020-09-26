

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* prefixesDivBy5(int* A, int ASize, int* returnSize){
    int i = 0;
    int prev = 0;
    bool* ans = malloc(sizeof(bool) * ((*returnSize) = ASize));
    for(i = 0; i < ASize; ++i){
        prev = (2 * prev + A[i]) % 5;
        ans[i] = (prev == 0);
    }
    return ans;
}