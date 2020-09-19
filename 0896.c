

bool isMonotonic(int* A, int ASize){
    int i,flag = -1;
    for(i = 0; i < ASize - 1; i++){
        if(flag == -1){
            if(A[i] == A[i + 1]){
                continue;
            }
            flag = A[i] > A[i + 1] ? 1 : 0;
            break;
        }
    }
    if(flag == 1){
        for(i = 0; i < ASize - 1; i++){
            if(A[i] < A[i + 1]){
                return false;
            }
        }
    }else{
        for(i = 0; i < ASize - 1; i++){
            if(A[i] > A[i + 1]){
                return false;
            }       
        }     
    }
    return true;
}