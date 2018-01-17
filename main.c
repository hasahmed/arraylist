#include <stdio.h>
#include "arraylist.h"

int main(){
    arraylist *arr_ls = arraylist_new(100);
    int i;
    for (i = 0; i < arr_ls->size; i++)
        ;//arr_ls->arr[i] = i * 20;

    //printf("%d\n", arr_ls->arr[99]);
    arraylist_free(arr_ls);
    return 0;
}
