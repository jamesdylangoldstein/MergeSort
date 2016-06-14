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
    int bufferArray[] = {4, 3, 2, 1};
    
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
    
    for(int bufferCounter = 0; bufferCounter < 4; bufferCounter++)
    {
        bufferArray[bufferCounter] = arrayOfNumbers[bufferCounter];
    }
    
    // Second round
    
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
        arrayOfNumbers[0] = bufferArray[0];
        
        if(bufferArray[1] > bufferArray[2])
        {
            arrayOfNumbers[1] = bufferArray[2];
            
            if (bufferArray[2] > bufferArray[3])
            {
                arrayOfNumbers[2] = bufferArray[3];
                arrayOfNumbers[3] = bufferArray[2];
            }
            else
            {
                arrayOfNumbers[2] = bufferArray[2];
                arrayOfNumbers[3] = bufferArray[3];
            }
        }
        else
        {
            arrayOfNumbers[1] = bufferArray[1];
            arrayOfNumbers[2] = bufferArray[2];
            arrayOfNumbers[3] = bufferArray[3];
        }
    }
    
    
    
    for(int printCounter = 0; printCounter < 4; printCounter++)
    {
        printf("%i ", arrayOfNumbers[printCounter]);
    }
    printf("\n");
    
   
    
    return 0;
}
