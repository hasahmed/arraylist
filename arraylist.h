#ifndef _ARRAYLIST_H_
#define _ARRAYLIST_H_
struct arraylist_t {
    int *arr;
    int size;
};
typedef struct arraylist_t arraylist;

arraylist* arraylist_new(int size);
void arraylist_free(arraylist *arr_ls);

#endif // _ARRAYLIST_H_
