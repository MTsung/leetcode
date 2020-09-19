

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize){ 
    int l = 0, r = n - 1;
    *returnSize = n;
    int* ans = malloc(sizeof(int) * n);
    while(l < r){
        ans[l++] = l * -1;
        ans[r--] = l;
        
    }
    if(l == r){
        ans[l] = 0;
    }
    return ans;
}