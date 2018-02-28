#ifndef __CMN_API_H__
#define __CMN_API_H__

/* Generate a random number between 1 to 1000 */
int generate_rand_num(unsigned seed);

/* Get n from user */
unsigned get_user_inp(void);

/* Initialize array with random values */
void array_init(int *arr , unsigned n);

/* Print sorted array on screen */
void print_sorted_array(int *arr, unsigned n);

#endif
