int max(int x, int y) {
    return (x > y ? x : y);
}

int min(int x, int y) {
    return (x < y ? x : y);
}

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H){
    long sum = 0;
    sum += abs(C - A) * abs(D - B);
    sum += abs(G - E) * abs(H - F);
    if(A < G && E < C && B < H && F < D){//重疊
        sum -= abs(min(D, H) - max(B, F)) * abs(min(G, C) - max(A, E));
    }
    return sum;
} 