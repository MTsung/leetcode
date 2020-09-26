
int thirdMax(int* nums, int numsSize){
    int i = 0, count = 0;
    long min, mid, max;
    min = mid = max = LONG_MIN;

    for(i = 0; i < numsSize; i++){
        if(nums[i] == max || nums[i] == mid){
            continue;
        }

        if(nums[i] > max){
            min = mid;
            mid = max;
            max = nums[i];
            count++;
        }else if(nums[i] > mid){
            min = mid;
            mid = nums[i];
            count++;
        }else if(nums[i] > min){
            min = nums[i];
            count++;
        }    
    }
            
    if(count >= 3){
        return min;
    }
    return max; 
}