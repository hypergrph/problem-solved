#include <stdio.h>
#include <stdlib.h>

int *sum(int arr1, int arr2, int size) {
    // arr
    int *ptrarr = (int *)malloc(size * sizeof(int));
    int add = 0;
    // loop
    for (int i = 0; i < size; i++) {
        int sum = arr1 % 10 + arr2 % 10 + add;
        arr1 /= 10;
        arr2 /= 10;
        // condition if sum > 9 -> add += 1;
        if (sum <= 9) {
            ptrarr[i] = sum;
            add = 0;
        } else {
            ptrarr[i] = sum % 10;
            add = 1;
        }
    }
    return ptrarr;
}

int main(){
    //value
    int size;
    int count = 0;
    //input size
    printf("Nhap size: ");
    scanf("%d", &size);
    //dynamic arr
    int *ptrarr1 = (int *) malloc (size * sizeof(int));
    int *ptrarr2 = (int *) malloc (size * sizeof(int));
    //loop 1
    do {
        scanf ("%d", &ptrarr1[count]);
        count++;
    } while (count < size);
    //return count
    count = 0;
    //loop 2
    do {
        scanf ("%d", &ptrarr2[count]);
        count++;
    } while (count < size);
    //main
    for (int i = 0; i < size; i++){
            int *result;
            //function sum()
            result = sum(ptrarr1[i], ptrarr2[i], size);
            //result;
            for (int i = 0; i < 1; i++){
         printf("%d ", result[i]);
         }
         free(result);
        } 
        return 0;       
    }