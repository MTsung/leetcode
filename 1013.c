

bool canThreePartsEqualSum(int* A, int ASize){
    int i = 0, sum = 0, temp = 0, count = 0;
    for(i = 0; i < ASize; i++){
        sum += A[i];
    }
    if(sum % 3 != 0){
        return false;
    }
    sum /= 3;
    for(i = 0; i < ASize; i++){
        temp += A[i];
        if(temp == sum){
            temp = 0;
            if(++count >= 2 && (i < ASize - 1)){
                return true;
            }
        }
    }
    return false;
}