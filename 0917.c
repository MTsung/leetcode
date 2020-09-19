bool isAtoZ(char s){
    return (s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z');
}

char * reverseOnlyLetters(char * S){
    int i = 0, l = 0, r = strlen(S) - 1, tempR = 0, tempL = 0;
    while(l < r){
        
        if(isAtoZ(S[l]) && isAtoZ(S[r])){
            char temp = S[l];
            S[l++] = S[r];
            S[r--] = temp;            
        }else if(isAtoZ(S[l]) || isAtoZ(S[r])){
            if(isAtoZ(S[l])){
                r--;
            }else{
                l++;
            }
        }else{
            l++;
            r--;
        }
    }
    return S;
}