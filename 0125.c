bool isAtoZ(char s){
    return (s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z') || (s >= '0' && s <= '9');
}

bool isPalindrome(char * s){
    int l = 0, r = strlen(s) - 1;
    if(r <= 0) return true;
    while(l < r){
        if(!isalnum(s[l])){
            l++;
        }else if(!isalnum(s[r])){
            r--;
        }else{
            if(tolower(s[l++]) != tolower(s[r--])){
                return false;
            }
        } 
    }
    return true;
}