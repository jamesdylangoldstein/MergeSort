//
//  main.c
//  CS50MergeSort
//
//  Created by James Dylan Goldstein on 6/13/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arrayOfNumbers[] = {3,4,2,1};
    
    
    for(int printCounter = 0; printCounter < 4; printCounter++)
    {
        printf("%i ", arrayOfNumbers[printCounter]);
    }
    printf("\n");

    // Digit 0 and 1 compared, switch places if necessary
    if (arrayOfNumbers[0] > arrayOfNumbers[1])
    {
        int bufferInt = arrayOfNumbers[0];
        arrayOfNumbers[0] = arrayOfNumbers[1];
        arrayOfNumbers[1] = bufferInt;
    }
    
    if (arrayOfNumbers[2] > arrayOfNumbers[3])
    {
        int bufferInt = arrayOfNumbers[2];
        arrayOfNumbers[2] = arrayOfNumbers[3];
        arrayOfNumbers[3] = bufferInt;
    }
    
    for(int printCounter = 0; printCounter < 4; printCounter++)
    {
        printf("%i ", arrayOfNumbers[printCounter]);
    }
    printf("\n");
    
    // Second round
    if (arrayOfNumbers[0] > arrayOfNumbers[2])
    {
        int bufferInt = arrayOfNumbers[0];
        arrayOfNumbers[0] = arrayOfNumbers[2];
        arrayOfNumbers[2] = bufferInt;
    }
    
    if (arrayOfNumbers[2] > arrayOfNumbers[3])
    {
        int bufferInt = arrayOfNumbers[2];
        int bufferIntTwo = arrayOfNumbers[1];
        arrayOfNumbers[1] = arrayOfNumbers[3];
        arrayOfNumbers[2] = bufferInt;
        arrayOfNumbers[3] = bufferIntTwo;
    }
    
    for(int printCounter = 0; printCounter < 4; printCounter++)
    {
        printf("%i ", arrayOfNumbers[printCounter]);
    }
    printf("\n");
    
   
    
    return 0;
}
