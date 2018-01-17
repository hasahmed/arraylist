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
    free((*arr_ls));
}
void arraylist_add(arraylist **arr_ls, int element){
    (*arr_ls)->_arr[(*arr_ls)->_c_idx] = element; // change the value pointed to by array pointer
    (*arr_ls)->_c_idx++; //we've moved to a new location
}
int arraylist_get(arraylist **arr_ls, int index){
    return (*arr_ls)->_arr[index];
}

/*void _arraylist_double(arraylist *arr_ls){*/
    /*// *arr_ls; //the struct pointed to*/
    /*// &arr_ls; //the address of the pointer of ls*/

    /*[> double the array size and copy everyting over <]*/
    /*arraylist *arr_ls_new = arraylist_new(arr_ls->size * 2); //double the size*/
    /*int i;*/
    /*for (i = 0; i < arr_ls->_c_idx; i++)*/
        /*arraylist_add(arr_ls_new, arraylist_get(arr_ls, i)); // copy everything over*/
    /*[> -end comment- <]*/

    /* we want the pointer passed in to point to a different struct after the function exits*/
        /**arr_ls = *arr_ls_new; //this is how we do that*/
        /*but we don't want to do that because then we won't be able to free the memory that that pointer originall pointed to*/
    /**/
    /*arraylist_free(arr_ls);*/
    /*[>arr_ls = arr_ls_new;<]*/

    /*[>arraylist address_store = *arr_ls;<]*/
    /*[>arr_ls_new = &address_store;<]*/
    /*[>printf("size of address_store %d\n", address_store.size);<]*/
    /*[>free(arr_ls_new->_arr);<]*/
    /*[>free(arr_ls_new);<]*/
    /*[>arraylist_free(arr_ls_new);<]*/
//}
