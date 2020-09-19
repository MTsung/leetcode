

bool isPathCrossing(char * path){
    int x = 0, y = 0, i = 0;
    int temp[100][100] = {0};
    temp[x+50][y+50] = 1;
    while(path[i]){
        switch(path[i]){
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x--;
                break;
            case 'W':
                x++;
        }
        if((i > 0) && temp[x+50][y+50]){
            return true;
        }
        temp[x+50][y+50] = 1;
        i++;
    }
    return false;
}