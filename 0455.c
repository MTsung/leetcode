int sort(const void * a, const void * b){
    return (*(int *)a > *(int *)b) ? 1 : -1;
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    int child = 0, cookie = 0, count = 0;
    qsort(g, gSize, sizeof(int), sort);
    qsort(s, sSize, sizeof(int), sort);
    while(child < gSize && cookie < sSize){
        if(g[child] <= s[cookie]){
            count++;
            child++;
        }
        cookie++;
    }
    return count;
}