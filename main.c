#include <stdio.h>
#include "arraylist.h"

int main(){
    arraylist *arr_ls = arraylist_new(100);
    printf("%d\n", arr_ls->size);
    arraylist_free(arr_ls);
    return 0;
}
