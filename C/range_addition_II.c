int maxCount(int m, int n, int** ops, int opsSize, int* opsColSize){
    if(opsSize == 0) return m * n;
    else {
        int x = *(*(ops)), y = *(*(ops)+1);
        for(int i = 1; i < opsSize; i++) {
            if(*(*(ops+i)) < x) x = *(*(ops+i));
            if(*(*(ops+i)+1) < y) y = *(*(ops+i)+1);
        }
        return x * y;
    }
}
