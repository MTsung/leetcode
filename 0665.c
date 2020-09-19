

bool checkPossibility(int* nums, int numsSize){
    int i = 0, count = 0, index = 0;
    for(i = 0; i < numsSize - 1; i++){
        if(nums[i] > nums[i+1]){
            index = i + 1;
            count++;
        }        
    }
    if(count >= 2){
        return false;
    }
    if(index == 0){
        return true;
    }
    if(index == 1 || index == numsSize - 1 || nums[index+1] >= nums[index-1] || nums[index] >= nums[index-2]){
        return true;
    }
    return false;
}