void reverseString(char* s, int sSize){
    int l = 0, r = sSize - 1;
    char temp;
    while(l < r){
        temp = s[l];
        s[l++] = s[r];
        s[r--] = temp;
    }
    return s;
}