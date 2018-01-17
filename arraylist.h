#ifndef _ARRAYLIST_H_
#define _ARRAYLIST_H_
struct arraylist_t {
    int *arr;
    int size;
    int c_idx; //we don't need to search for a free space
};
typedef struct arraylist_t arraylist;

arraylist* arraylist_new(int size);
void arraylist_free(arraylist *arr_ls);
void arraylist_add(arraylist *arr_ls, int element);
int arraylist_get(arraylist *arr_ls, int index);

#endif // _ARRAYLIST_H_
