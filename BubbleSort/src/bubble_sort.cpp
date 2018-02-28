#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>

#include "cmn_api.h"

/* Bubble sort algorithm */
void bubble_sort(int *arr, unsigned n)
{
    int i = 0;
    int j = n-2;

    bool swapped = false;

    while(!swapped)
    {
        swapped = true;
        for(i = 0; i <= j; ++i)
        {
            if(arr[i] > arr[i+1])
            {
                arr[i] ^= arr[i+1];
                arr[i+1] ^= arr[i];
                arr[i] ^= arr[i+1];

                swapped = false;
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

    bubble_sort(arr, n);

    print_sorted_array(arr, n);

    return 0;
}
