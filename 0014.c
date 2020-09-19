

char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize == 0){
        return "";
    }
    int i = 0, j = 0, stop = 0;
    char now = strs[0][j];
    while(now && !stop){
        for(i = 0; i < strsSize ;i++){
            if(now != strs[i][j]){
                stop = 1;
                break;
            }
        }
        if(!stop){
            now = strs[0][++j];
        }
    }
    strs[0][j] = '\0';
    return strs[0];
}