bool isVowels(char c){
    return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'u') || (c == 'o') || (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U');
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return true;
    }
    return false;
}

char * reverseVowels(char * s){
    int l = 0, r = strlen(s) - 1;
    while(l < r){
        if(!isVowels(s[l])){
            l++;
        }else if(!isVowels(s[r])){
            r--;
        }else{
            char temp = s[l];
            s[l++] = s[r];
            s[r--] = temp;
        }
    }
    return s;
}