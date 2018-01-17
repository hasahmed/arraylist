#include <stdio.h>
#include <stdlib.h>
#include "arraylist.h"


arraylist* arraylist_new(int size){
    arraylist *arr_ls = (arraylist*)malloc(sizeof(arraylist));
    arr_ls->_arr = (int*)malloc(sizeof(int) * size);
    arr_ls->size = size;
    arr_ls->_c_idx = 0;
    int i;
    for (i = 0; i < size; i++)
        arr_ls->_arr[i] = 0; //zero out memory

    return arr_ls;
}
void arraylist_free(arraylist **arr_ls){
    free((*arr_ls)->_arr);
    free(*arr_ls);
}
void arraylist_add(arraylist **arr_ls, int element){
    (*arr_ls)->_arr[(*arr_ls)->_c_idx] = element; // change the value pointed to by array pointer
    (*arr_ls)->_c_idx++; //we've moved to a new location
}
int arraylist_get(arraylist **arr_ls, int index){
    return (*arr_ls)->_arr[index];
}

void _arraylist_double(arraylist **arr_ls){
    arraylist *arr_ls_new = arraylist_new((*arr_ls)->size * 2); //double the size
    printf("the size of the new array is %d\n", arr_ls_new->size);
    int i;
    for (i = 0; i < (*arr_ls)->_c_idx; i++)
        arraylist_add(&arr_ls_new, arraylist_get(arr_ls, i)); // copy everything over
    printf("an element of new arr is %d\n", arraylist_get(&arr_ls_new, 99));
    arraylist **tmp = arr_ls;
    arraylist_free(arr_ls);
    arr_ls = &arr_ls_new;
}
