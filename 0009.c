

bool isPalindrome(int x){
    if(x >= 0 && x < 10){
        return true;
    }
    if(x < 0 || (x % 10 == 0)){
        return false;
    }
    
    //運算解
    int left = x, right = 0;
    while(left > right){
        right *= 10;
        right += left % 10;
        left /= 10;
    }
    return (left == right || (left == right / 10));
    
    
    //字串解
    int i,j = 0;
    char s[20] = {NULL}, o[20] = {NULL};
    
    sprintf(s,"%d",x);
    for(i=0 ; i<20 ;i++){
        if(s[19-i]){
            o[j++] = s[19-i];            
        }
    }
    return (atoi(o) == atoi(s));
    
}