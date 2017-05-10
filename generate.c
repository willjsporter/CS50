/**
 * generate.c
 *
 * Generates pseudorandom numbers in [0,MAX), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// upper limit on range of integers that can be generated
#define LIMIT 65536

int main(int argc, string argv[])
{
    // Prompts the user to input a command line with either 2 (no seed) or 3 (with a seed) arguments by stating the proper usage (n mandatory, s optional)
    if (argc != 2 && argc != 3)
    {
        printf("Usage: ./generate n [s]\n");
        return 1;
    }

    // takes a string and returns an integer up until the first non-integer character in the string. If the string doesn't start with a number then returns 0
    int n = atoi(argv[1]);

    // For 3 command line arguments, put the seed as the 3rd command line argument, else input time(NULL) which equates to using the seed based on the current calendar time (based on time since Jan 1 1970 in seconds)
    if (argc == 3)
    {
        srand48((long) atoi(argv[2]));
    }
    else
    {
        srand48((long) time(NULL));
    }

    // for a number specified (n) and maybe a certain seed (can be represented as a string as long as the relevant number is at the beginning) provide positive random numbers between zero and 65536 (by the function drand48 which takes a random number between 0 and 1 and multiplying by 65536)
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}
