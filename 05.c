#include <stdio.h>
#define size 10

int main()
{
    int A[size] = {1, 3, 8, 9, 4, 0, 2, 6, 7, 5};
    //for(int i = 0, i < size; i++) scanf("%d", &A[i]);

    int k;
    int s = size;
    while(s > 1){
        for(int i = 0; i < s; i++){
            if(A[i] > A[i+1]){
                k = A[i];
                A[i] = A[i+1];
                A[i+1] = k;
            }
        }
        s--;
        //for (int i = 0; i < size; ++i) printf("%d, ", A[i]);
    }
    return 0;
}
