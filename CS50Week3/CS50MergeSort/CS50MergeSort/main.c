//
//  main.c
//  CS50MergeSort
//
//  Created by James Dylan Goldstein on 6/13/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arrayOfNumbers[] = {8, 7, 6, 5, 4, 3, 2, 1};
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
    
    comparisonCounterArrayValue = 0;
    
    for (int comparisonCounter = 1; comparisonCounter <= (numberOfComparisons/2); comparisonCounter++)
    {
        if (bufferArray[comparisonCounterArrayValue] > bufferArray[comparisonCounterArrayValue + 2])
        {
            arrayOfNumbers[comparisonCounterArrayValue] = bufferArray[comparisonCounterArrayValue + 2];
            
            if(bufferArray[comparisonCounterArrayValue] > bufferArray[comparisonCounterArrayValue + 3])
            {
                arrayOfNumbers[comparisonCounterArrayValue + 1] = bufferArray[comparisonCounterArrayValue + 3];
                arrayOfNumbers[comparisonCounterArrayValue + 2] = bufferArray[comparisonCounterArrayValue];
                arrayOfNumbers[comparisonCounterArrayValue + 3] = bufferArray[comparisonCounterArrayValue + 1];
            }
            else
            {
                arrayOfNumbers[comparisonCounterArrayValue + 1] = bufferArray[comparisonCounterArrayValue];
                
                if(bufferArray[comparisonCounterArrayValue + 1] > bufferArray[comparisonCounterArrayValue + 3])
                {
                    arrayOfNumbers[comparisonCounterArrayValue + 2] = bufferArray[comparisonCounterArrayValue + 3];
                    arrayOfNumbers[comparisonCounterArrayValue + 3] = bufferArray[comparisonCounterArrayValue + 1];
                }
                else
                {
                   arrayOfNumbers[comparisonCounterArrayValue + 2] = bufferArray[comparisonCounterArrayValue + 1];
                }
            }
        }
        else
        {
            if(bufferArray[comparisonCounterArrayValue + 1] > bufferArray[comparisonCounterArrayValue + 2])
            {
                arrayOfNumbers[comparisonCounterArrayValue + 1] = bufferArray[comparisonCounterArrayValue + 2];
                
                if (bufferArray[comparisonCounterArrayValue + 2] > bufferArray[comparisonCounterArrayValue + 3])
                {
                    arrayOfNumbers[comparisonCounterArrayValue + 2] = bufferArray[comparisonCounterArrayValue + 3];
                    arrayOfNumbers[comparisonCounterArrayValue + 3] = bufferArray[comparisonCounterArrayValue + 2];
                }
            }
        }

    // Needs to be changed to dynamic value
    comparisonCounterArrayValue += 4;
    }
    
    
    for(int printCounter = 0; printCounter < lengthOfArray; printCounter++)
    {
        printf("%i ", arrayOfNumbers[printCounter]);
    }
    printf("\n");
    
   
    
    return 0;
}
