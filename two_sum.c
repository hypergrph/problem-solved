#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int size, target;
    bool stop = true;
    
    printf("Nhap kich thuoc cua day: ");
    scanf("%d", &size);
    
    printf("Nhap target: ");
    scanf("%d", &target);
    
    int *ptrarr = (int *) malloc(size * sizeof(int));
    
    printf("Nhap cac phan tu: ");
    for (int i = 0; i < size; i++){
        scanf("%d", &ptrarr[i]);
        }
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (i == j){
                continue;
                }
            if (ptrarr[i] + ptrarr[j] == target){
                printf("%d, %d", i, j);
                stop = false;
                break;
                }           
            }
            if (stop ==  false){
                break;
                }
        } 
        free(ptrarr);
        return 0;
    }