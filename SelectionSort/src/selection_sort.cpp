#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>

#include "cmn_api.h"

/* Selection sort algorithm */
void selection_sort(int *arr, unsigned n)
{
    unsigned i = 0;
    unsigned j = 0;

    unsigned min_idx=0;

    for(i = 0; i < n; ++i)
    {
        min_idx=i;
        for(j = i + 1; j < n; ++j)
        {
            if(arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        
        if(min_idx != i)
        {
            arr[i] ^= arr[min_idx];
            arr[min_idx] ^= arr[i];
            arr[i] ^= arr[min_idx];
        }
    }
}

/* Driver program */
int main(int argc, char *argv[])
{
    unsigned n = get_user_inp();
    int arr[n];

    array_init(arr, n);

    selection_sort(arr, n);

    print_sorted_array(arr, n);

    return 0;
}
