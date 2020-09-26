
int sort(const void * a, const void * b){
    return (*(int *)b - *(int *)a);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minSubsequence(int* nums, int numsSize, int* returnSize){
    (*returnSize) = 0;
    qsort(nums, numsSize, sizeof(int), sort);
    int i = 0, sum = 0, temp = 0;
    for(i = 0; i < numsSize; i++){
        sum += nums[i];
    }
    i = 0;
    while((temp <= sum - temp) && (i < numsSize)){
        temp += nums[i++];
        (*returnSize)++;
    }
    return nums;
}