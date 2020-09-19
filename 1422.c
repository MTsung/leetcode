

int maxScore(char * s){
    int max = 0, l = 0, r = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '1'){
            r++;
        }
    }
    for(int i = 0; i < strlen(s) - 1; i++){
        if(s[i] == '0'){
            l++;
        }else{
            r--;
        }
        if(max < l + r){
            max =  l + r;
        }
    }
    return max;
    
    // int max = 0, l, r;
    for(int i = 0; i < strlen(s); i++){
        l = r = 0;
        
        for(int j = 0; j < strlen(s); j++){
            if((j < i + 1) && (j < strlen(s) - 1)){
                if(s[j] == '0') l++;
            }else{
                if(s[j] == '1') r++;
            }
        }
        if(max < l + r){
            max =  l + r;
        }
    }
    return max;
}