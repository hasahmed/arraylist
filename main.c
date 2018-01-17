#include <stdio.h>
#include "arraylist.h"

int main(){
    arraylist *arr_ls = arraylist_new(100);
    int i;
    for (i = 0; i < arr_ls->size; i++)
        arraylist_add(&arr_ls, i * 20);

    /*_arraylist_double(arr_ls);*/

    printf("%d\n", arraylist_get(&arr_ls, 11));
    arraylist_free(&arr_ls);
    /*printf("%d\n", arraylist_get(arr_ls, 98));*/
    /*arraylist_free(arr_ls);*/
    return 0;
}
