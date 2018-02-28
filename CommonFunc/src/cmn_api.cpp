#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>

#include "cmn_api.h"

/* Generate a random number between 1 to 1000 */
int generate_rand_num(unsigned seed)
{
    srand(time(0) + seed);

    return rand()%1000 +1;
}

/* Get n from user */
unsigned get_user_inp(void)
{
    unsigned n;

    std::cout << "Enter valid input n : ";
    std::cin >> n;

    while(!std::cin)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Enter valid input n : ";
        std::cin >> n;
    }

    return n;
}

/* Initialize array with random values */
void array_init(int *arr , unsigned n)
{
    unsigned i = 0;
    std::cout << "Input arrary : [ ";
    for(i = 0; i < n ; ++i)
    {
        arr[i] = generate_rand_num(i);
        std::cout << arr[i];
        if(i < (n-1))
            std::cout << ", ";
    }

    std::cout << " ]" << std::endl;
}

/* Print sorted array on screen */
void print_sorted_array(int *arr, unsigned n)
{    
    /*Printing is not a part of algorithm */
    std::cout << "Output array : [ ";
    for(unsigned i = 0; i < n ; ++i)
    {
        std::cout << arr[i];
        if(i < (n-1))
            std::cout << ", ";
    }

    std::cout << " ]" << std::endl;
}

