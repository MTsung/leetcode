

bool isValid(char * s){
    char temp[10000];
    int i = 0, j = 1;
    while(s[i]){
        switch(s[i]){
            case ')':
                if(temp[--j] != '('){
                    return false;
                }
                break;
            case '}':
                if(temp[--j] != '{'){
                    return false;
                }
                break;
            case ']':
                if(temp[--j] != '['){
                    return false;
                }
                break;
            default:
                temp[j++] = s[i];
        }
        i++;
    }
    return j == 1;
}