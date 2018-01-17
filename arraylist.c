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
void arraylist_add(arraylist *arr_ls, int element){
    arr_ls->arr[arr_ls->c_idx] = element; // change the value pointed to by array pointer
    arr_ls->c_idx++; //we've moved to a new location
}
int arraylist_get(arraylist *arr_ls, int index){
    return arr_ls->arr[index];
}
