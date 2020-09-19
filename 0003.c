

int lengthOfLongestSubstring(char * s){
    int max = 0, i, temp, location[128], size = strlen(s), tempR = 0, left = 0;
    for(i = 0; i < 128; i++){
        location[i] = -1;
    }
    
    for(i = 0; i < size; i++){
        temp = location[s[i]];//前一個出現位置
        location[s[i]] = i;//最後出現位置
        if(temp >= left){//出現過 計算長度
            if(max < (i - left)){
                max = (i - left);
            }
            left = temp + 1;//算下一段
        }
    }
    if(max < (i - left)){//最後一段
        max = (i - left);
    }
    return max;
}