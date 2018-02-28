#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>

#include "cmn_api.h"

/* Insertion sort algorithm */
void insertion_sort(int *arr, unsigned n)
{
    unsigned i = 0;
    unsigned j = 0;

    for(i = 0; i < n; ++i)
    {
        for(j = i; j >= 1; --j)
        {
	    int idx = j -1;
            if(arr[idx] > arr[j])
            {
                arr[j] ^= arr[idx];
                arr[idx] ^= arr[j];
                arr[j] ^= arr[idx];
            }
        }
    }
}

/* Driver program */
int main(int argc, char *argv[])
{
    unsigned n = get_user_inp();
    int arr[n];

    array_init(arr, n);

    insertion_sort(arr, n);

    print_sorted_array(arr, n);

    return 0;
}
