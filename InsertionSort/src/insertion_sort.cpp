#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>

/* Generate a random number between 1 to 1000 */
int generate_rand_num(unsigned seed)
{
    srand(time(0) + seed);

    return rand()%1000 +1;
}

/* Get n from user */
inline unsigned get_user_inp(void)
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
