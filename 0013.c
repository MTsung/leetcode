
int getNum(char c){
    switch(c){
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
    }
    return 0;
}

int romanToInt(char * s){
    int i = 0, ans = 0, now = 0, next = 0;
    while(s[i]){
        if(s[i]){
            now = getNum(s[i]);
            next = getNum(s[i+1]);
            if(now >= next){
                ans += now;
            }else{
                ans -= now;
            }
            if(now == 0){
                return ans;
            }
        }
        i++;
    }
    return ans;
}