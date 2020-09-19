

int reverse(int x){
    char s[20] = {NULL}, o[20] = {NULL};
    int i, j = 0 ;
    long ans = 0, n = 1;
    if(x < 0){
        n = -1;
    }
    sprintf(s,"%d",x);
    for(i=1 ; i<20 ;i++){
        if(s[19-i]){
            o[j++] = s[19-i];            
        }
    }

    ans = atol(o) * n;
    
    if(ans > INT_MAX || ans < INT_MIN){
        return 0;
    }
    
    return ans;
}