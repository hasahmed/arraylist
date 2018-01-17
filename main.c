#include <stdio.h>
#include "arraylist.h"

int main(){
    arraylist *arr_ls = arraylist_new(100);
    int i;
    for (i = 0; i < arr_ls->size; i++)
        arraylist_add(&arr_ls, i * 20);

    printf("the size of the array %d\n", arr_ls->size);
    _arraylist_double(&arr_ls);
    printf("the size of the array %d\n", arr_ls->size);
    arraylist_free(&arr_ls);
    return 0;
}
