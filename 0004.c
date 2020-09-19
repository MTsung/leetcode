

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    double ans = 0;
    int total = nums1Size + nums2Size;//總長度
    int i = 0, l1 = 0, l2 = 0, mid = ceil((double)total / 2);
    while(l1 < nums1Size || l2 < nums2Size){
        int now;
        if((l1 < nums1Size) && (l2 < nums2Size)){
            if(nums1[l1] < nums2[l2]){
                now = nums1[l1++];
            }else{
                now = nums2[l2++];
            }
        }else if(l1 < nums1Size){
            now = nums1[l1++];
        }else if(l2 < nums2Size){
            now = nums2[l2++];
        }
        
        
        i++;
        if(i >= mid){
            if(total % 2){//總數奇數個找到mid就能停止
                return (double)now;
            }else{//總數偶數個等下一個數字後除2
                ans += (double)now;
                if(i == mid + 1){
                    return ans / 2;
                }
            }
        }
    }
    return ans;
}