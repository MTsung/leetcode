char * reverseStr(char * s, int k){
    int i = 0;
    for(i = 0; i < strlen(s); i += 2 * k){
        int start, end;
        start = i;
        if(i + k <= strlen(s)){
            end = i + k - 1;
        }else{
            end = strlen(s) - 1;
        }
        while(start < end){
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
    return s;
}