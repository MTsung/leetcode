

bool judgeCircle(char * moves){
    int x = 0, y = 0, i, len = strlen(moves);
    for(i = 0; i < len; i++){
        switch(moves[i]){
            case 'R':
                x++;
                break;
            case 'L':
                x--;
                break;
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
        }
    }
    return !(x || y);
}