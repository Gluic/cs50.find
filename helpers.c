/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int x = n\2;
    if (n <=0)
        return false;
    else
        for (int i = 0; i < n\2; i++)
            {
                if (value == values[x])
                    return true;
                else
                {
                    if (value < values[x])
                        x = x\2;
                    x = x + (n - x)\2;
                }
            }
     return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int temp;
    int count = 0;
    while (n != 0 || count == n - 1)
    {
        count = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (values[i] > values [i+1])
            {
                temp = values [i];
                values [i] = values [i+1];
                values [i+1] = temp;
            }
            else
                count = count + 1;
        }
        n = n - 1;   
     }
    
    return;
}
