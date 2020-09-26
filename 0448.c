

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
    int i = 0;
    *returnSize = numsSize;
    for(i = 0; i < numsSize; i++){
        int temp = abs(nums[i]) - 1;
        if(nums[temp] > 0){
            (*returnSize)--;
            nums[temp] *= -1;
        }
    }
    
    int ansI = 0;
    for(i = 0; i < numsSize; i++){
        if(nums[i] > 0){
            nums[ansI++] = i + 1;
        }
        if(ansI == *returnSize){
            return nums;
        }
    }
    
    return nums;
}