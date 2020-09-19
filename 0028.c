

int strStr(char * haystack, char * needle){
    if(strlen(needle) == 0){
        return 0;
    }
    int i = 0, j = 0;
    while(haystack[i] && i <= (strlen(haystack)-strlen(needle))){
        if(haystack[i] == needle[j]){
            if(strncmp(haystack + i, needle, strlen(needle)) == 0){
                return i;
            }
        }
        i++;
    }
    return -1;
}