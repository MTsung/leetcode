
struct node {
    long value;
    int index;
};

typedef struct node node;

int comp(const void* a, const void* b) {//排序
    return (((node*)a)->value > ((node*)b)->value);
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int i = 0, s = 0, e = numsSize-1;
    node* nodes = (node*)malloc(numsSize * sizeof(node));
    int* ans = NULL;
    
    for(i = 0; i < numsSize; i++) {
        nodes[i].value = nums[i];
        nodes[i].index = i;
    }
    
    qsort(nodes, numsSize, sizeof(node), comp);
    while(s < e){
        if((nodes[s].value + nodes[e].value) == target){
            ans = (int*)malloc(sizeof(int) * *returnSize);
            ans[0] = nodes[s].index;
            ans[1] = nodes[e].index;
            free(nodes);
            return ans;
        }else if((nodes[s].value + nodes[e].value) > target){
            e--;
        }else{
            s++;
        }
        
    }
    free(nodes);
    return ans;
}