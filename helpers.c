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
    int x = 0;
    if (n <=0)
        return false;
    else
        while (x )
        {
        
        for (int i = 0; i < n; i++)
            {
                if (value == values[i])
                    return true;
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
