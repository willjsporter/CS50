/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value (from command line in find.c) is in the given array (values) of n values, else false.
 */
bool search(int value, int values[], int n)
{   if(value<=0){return false;}
    else{
        int lBd = 0; int uBd = n; bool stopper = false;
        while(stopper==false && lBd<=uBd){
            int midP=(uBd+lBd)/2;
            
            if(value==values[midP]){stopper = true;} //if we find value then stop search with stopper and this will also lead to true being returned
            else if(value>values[midP]){lBd=midP+1;} //if value is higher than the point tried then set new lower bound as the value one above the point tried
            else if(value<values[midP]){uBd=midP-1;} //if value is lower than the point tried then set new upper bound as the value one below the point tried
        }
        return stopper;
    }
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
    {int sortArray[65536];          //define an array that has 0 in all values except the ones which appear in values[] 
    for(int i=0; i<65536; i++)
        {sortArray[i]=0;}
    for(int j=0; j<n; j++)
        {sortArray[values[j]]=sortArray[values[j]]+1;}      //For those positions with numbers in, denote the number of times this appears
    int m =0;               //define m which enumerates the position in the array for elements of the final sorted array
    for (int k=0; k<65536; k++ && m<n){     //loop for all entries in sortArray
        if(sortArray[k]==0){NULL;}          //for 
        else{
        for (int l=0; l<sortArray[k]; l++){
            values[m]=k;
            m++;
        }
    }
    }
    
    // TODO: implement an O(n) sorting algorithm
    
    
    return; // how can i be sure this is returning what I want?
}
