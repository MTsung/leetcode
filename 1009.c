

int bitwiseComplement(int N){
    int temp = N, i = 1;
    while(temp >>= 1){
        i <<= 1;
    }
    i <<= 1;
    return N ^ (i-1);
}