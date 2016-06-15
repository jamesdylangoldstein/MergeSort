//
//  main.c
//  CS50MergeSort
//
//  Created by James Dylan Goldstein on 6/13/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arrayOfNumbers[] = {4, 3, 2, 1};
    int lengthOfArray = sizeof(arrayOfNumbers)/4;
    int numberOfComparisons = lengthOfArray/2;
    int bufferArray[lengthOfArray];

    for(int printCounter = 0; printCounter < lengthOfArray; printCounter++)
    {
        printf("%i ", arrayOfNumbers[printCounter]);
    }
    printf("\n");

    // Digit 0 and 1 compared, switch places if necessary
    int comparisonCounterArrayValue = 0;
    
    for (int comparisonCounter = 1; comparisonCounter <= numberOfComparisons; comparisonCounter++)
    {
        if (arrayOfNumbers[comparisonCounterArrayValue] > arrayOfNumbers[comparisonCounterArrayValue + 1])
        {
            int bufferInt = arrayOfNumbers[comparisonCounterArrayValue];
            arrayOfNumbers[comparisonCounterArrayValue] = arrayOfNumbers[comparisonCounterArrayValue + 1];
            arrayOfNumbers[comparisonCounterArrayValue + 1] = bufferInt;
        }
        
        comparisonCounterArrayValue += 2;
    }
    
    for(int printCounter = 0; printCounter < lengthOfArray; printCounter++)
    {
        printf("%i ", arrayOfNumbers[printCounter]);
    }
    printf("\n");
    
    
    
    // Second round
    
    for(int bufferCounter = 0; bufferCounter < lengthOfArray; bufferCounter++)
    {
        bufferArray[bufferCounter] = arrayOfNumbers[bufferCounter];
    }
    
    if (bufferArray[0] > bufferArray[2])
    {
        arrayOfNumbers[0] = bufferArray[2];
        
        if(bufferArray[0] > bufferArray[3])
        {
            arrayOfNumbers[1] = bufferArray[3];
            arrayOfNumbers[2] = bufferArray[0];
            arrayOfNumbers[3] = bufferArray[1];
        }
        else
        {
            arrayOfNumbers[1] = bufferArray[0];
            
            if(bufferArray[1] > bufferArray[3])
            {
                arrayOfNumbers[2] = bufferArray[3];
                arrayOfNumbers[3] = bufferArray[1];
            }
            else
            {
               arrayOfNumbers[2] = bufferArray[1];
               arrayOfNumbers[3] = bufferArray[3];
            }
        }
    }
    else
    {
        if(bufferArray[1] > bufferArray[2])
        {
            arrayOfNumbers[1] = bufferArray[2];
            
            if (bufferArray[2] > bufferArray[3])
            {
                arrayOfNumbers[2] = bufferArray[3];
                arrayOfNumbers[3] = bufferArray[2];
            }
        }
    }
    
    
    
    for(int printCounter = 0; printCounter < lengthOfArray; printCounter++)
    {
        printf("%i ", arrayOfNumbers[printCounter]);
    }
    printf("\n");
    
   
    
    return 0;
}
