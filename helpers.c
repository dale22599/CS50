/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <stdio.h>
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if(n < 1)
        return false;
    int mid = values[n/2];
    
    /*
    printf("%i ", mid);
    printf("%i ,", value);
    */
    
    if (value == mid)
        return true;
    else if(mid > value)
    {
        int newVal[n/2];
        for(int i = 0; i < n/2; i++)
        {
            newVal[i] = values[i];
        }
        return search(value, newVal, n/2);
    }
    else
    {
        int newVal[n/2];
        for(int i = 0; i < n/2; i++)
        {
            newVal[i] = values[(n+1)/2 + i];
        }
        return search(value, newVal, n/2);
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int size = 65536;
    int count[size];
    for(int i = 0; i < size; i++)
    {
        count[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        count[values[i]]++;
    }
    
    int index = 0;
    
    /*
    for (int i = 0; i < size; i++)
    {
        printf("\n%i", count[i]);
    }
    */
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < count[i]; j++)
        {
            values[index] = i;
            index++;
        }
    }
}