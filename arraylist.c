#include <stdlib.h>
#include "arraylist.h"


arraylist* arraylist_new(int size){
    arraylist *arr_ls = (arraylist*)malloc(sizeof(arraylist));
    arr_ls->arr = (int*)malloc(sizeof(int) * size);
    arr_ls->size = size;
    return arr_ls;
}
void arraylist_free(arraylist *arr_ls){
    free(arr_ls->arr);
    free(arr_ls);
}
