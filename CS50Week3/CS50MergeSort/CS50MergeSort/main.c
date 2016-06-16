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
    int lengthOfArray = sizeof(arrayOfNumbers) / 4;
    int numberOfComparisons = lengthOfArray / 2;
    int bufferArray[lengthOfArray];
    int endOfArray[lengthOfArray - 1];

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
    
    // Third round
    for(int bufferCounter = 0; bufferCounter < lengthOfArray; bufferCounter++)
    {
        bufferArray[bufferCounter] = arrayOfNumbers[bufferCounter];
    }
    
    if (bufferArray[0] > bufferArray[4])
    {
        arrayOfNumbers[0] = bufferArray[4];
        
        if(bufferArray[0] > bufferArray[5])
        {
            arrayOfNumbers[1] = bufferArray[5];
            
            if(bufferArray[0] > bufferArray[6])
            {
                arrayOfNumbers[2] = bufferArray[6];
                
                if(bufferArray[0] > bufferArray[7])
                {
                    arrayOfNumbers[3] = bufferArray[7];
                    
                    arrayOfNumbers[4] = bufferArray[0];
                    arrayOfNumbers[5] = bufferArray[1];
                    arrayOfNumbers[6] = bufferArray[2];
                    arrayOfNumbers[7] = bufferArray[3];
                    
                }
                else if(bufferArray[0] < bufferArray[7])
                {
                    arrayOfNumbers[3] = bufferArray[0];
                    
                    if (bufferArray[1] > bufferArray[7])
                    {
                        arrayOfNumbers[4] = bufferArray[7];
                        
                        arrayOfNumbers[5] = bufferArray[1];
                        arrayOfNumbers[6] = bufferArray[2];
                        arrayOfNumbers[7] = bufferArray[3];
                    }
                    else if (bufferArray[1] < bufferArray[7])
                    {
                        arrayOfNumbers[4] = bufferArray[1];
                        
                        if (bufferArray[2] > bufferArray[7])
                        {
                            arrayOfNumbers[5] = bufferArray[7];
                            
                            arrayOfNumbers[6] = bufferArray[2];
                            arrayOfNumbers[7] = bufferArray[3];
                        }
                        else if (bufferArray[2] < bufferArray[7])
                        {
                            arrayOfNumbers[5] = bufferArray[2];
                            
                            if (bufferArray[3] > bufferArray[7])
                            {
                                arrayOfNumbers[6] = bufferArray[7];
                                arrayOfNumbers[7] = bufferArray[3];
                            }
                            else if (bufferArray[3] < bufferArray[7])
                            {
                                arrayOfNumbers[6] = bufferArray[3];
                                arrayOfNumbers[7] = bufferArray[7];
                            }
                        }
                    }
                }
            }
            else if (bufferArray[0] < bufferArray[6])
            {
                arrayOfNumbers[2] = bufferArray[0];
                
                if (bufferArray[1] > bufferArray[6])
                {
                    arrayOfNumbers[3] = bufferArray[6];
                    
                    if (bufferArray[1] > bufferArray[7])
                    {
                        arrayOfNumbers[4] = bufferArray[7];
                        
                        arrayOfNumbers[5] = bufferArray[1];
                        arrayOfNumbers[6] = bufferArray[2];
                        arrayOfNumbers[7] = bufferArray[3];
                    }
                    else if (bufferArray[1] < bufferArray[7])
                    {
                        arrayOfNumbers[4] = bufferArray[1];
                        
                        if (bufferArray[2] > bufferArray[7])
                        {
                            arrayOfNumbers[5] = bufferArray[7];
                            
                            if (arrayOfNumbers[3] > arrayOfNumbers[7])
                            {
                                arrayOfNumbers[6] = bufferArray[7];
                                arrayOfNumbers[7] = bufferArray[3];
                            }
                            else if (arrayOfNumbers[3] < arrayOfNumbers[7])
                            {
                                arrayOfNumbers[6] = bufferArray[3];
                                arrayOfNumbers[7] = bufferArray[7];
                            }
                        }
                        else if (bufferArray[2] < bufferArray[7])
                        {
                            arrayOfNumbers[5] = bufferArray[2];
                            
                            if (arrayOfNumbers[3] > arrayOfNumbers[7])
                            {
                                arrayOfNumbers[6] = bufferArray[7];
                                arrayOfNumbers[7] = bufferArray[3];
                            }
                            else if (arrayOfNumbers[3] < arrayOfNumbers[7])
                            {
                                arrayOfNumbers[6] = bufferArray[3];
                                arrayOfNumbers[7] = bufferArray[7];
                            }
                        }
                    }
                }
                else if (bufferArray[1] < bufferArray[6])
                {
                    arrayOfNumbers[3] = bufferArray[1];
                    
                    if (bufferArray[2] > bufferArray[6])
                    {
                        
                    }
                    
                }
            }
        }
        else if (bufferArray[0] < bufferArray[5])
        {
            arrayOfNumbers[1] = bufferArray[0];
            
            if (bufferArray[1] > bufferArray[5])
            {
                arrayOfNumbers[2] = bufferArray[5];
                
                if (bufferArray[1] > bufferArray[6])
                {
                    arrayOfNumbers[3] = bufferArray[6];
                    
                    if (bufferArray[1] > bufferArray[7])
                    {
                        arrayOfNumbers[4] = bufferArray[7];
                        
                        arrayOfNumbers[5] = bufferArray[1];
                        arrayOfNumbers[6] = bufferArray[2];
                        arrayOfNumbers[7] = bufferArray[3];
                    }
                    else if (bufferArray[1] < bufferArray[7])
                    {
                        arrayOfNumbers[4] = bufferArray[1];
                        
                        if (bufferArray[2] > bufferArray[7])
                        {
                            arrayOfNumbers[5] = bufferArray[7];
                            
                            if (bufferArray[2] > bufferArray[3])
                            {
                                arrayOfNumbers[6] = bufferArray[3];
                                arrayOfNumbers[7] = bufferArray[2];
                            }
                            else if (bufferArray[2] < bufferArray[3])
                            {
                                arrayOfNumbers[6] = bufferArray[2];
                                arrayOfNumbers[7] = bufferArray[3];
                            }
                        }
                        else if (bufferArray[2] < bufferArray[7])
                        {
                            arrayOfNumbers[5] = bufferArray[2];
                            
                            if (bufferArray[3] > bufferArray[7])
                            {
                                arrayOfNumbers[6] = bufferArray[7];
                                arrayOfNumbers[7] = bufferArray[3];
                            }
                            else if (bufferArray[3] < bufferArray[7])
                            {
                                arrayOfNumbers[6] = bufferArray[3];
                                arrayOfNumbers[7] = bufferArray[7];
                            }
                        }
                    }
                }
                else if(bufferArray[1] < bufferArray[5])
                {
                    arrayOfNumbers[3] = bufferArray[1];
                    
                    arrayOfNumbers[5] = bufferArray[5];
                    arrayOfNumbers[6] = bufferArray[6];
                    arrayOfNumbers[7] = bufferArray[7];
                }
            }
            else if (bufferArray[1] < bufferArray[5])
            {
                arrayOfNumbers[2] = bufferArray[1];
                
                if (bufferArray[2] > bufferArray[5])
                {
                    arrayOfNumbers[3] = bufferArray[5];
                    
                    if (bufferArray[2] > bufferArray[6])
                    {
                        arrayOfNumbers[4] = bufferArray[6];
                        
                        if (bufferArray[2] > bufferArray[7])
                        {
                            arrayOfNumbers[5] = bufferArray[7];
                            
                            arrayOfNumbers[6] = bufferArray[2];
                            arrayOfNumbers[7] = bufferArray[3];
                        }
                        else if (bufferArray[2] < bufferArray[7])
                        {
                            arrayOfNumbers[5] = bufferArray[2];
                            
                            if (bufferArray[3] > bufferArray[7])
                            {
                                arrayOfNumbers[6] = bufferArray[7];
                                arrayOfNumbers[7] = bufferArray[3];
                            }
                            else if (bufferArray[3] < bufferArray[7])
                            {
                                arrayOfNumbers[6] = bufferArray[3];
                                arrayOfNumbers[7] = bufferArray[7];
                            }
                        }
                    }
                    else if (bufferArray[2] < bufferArray[6])
                    {
                        arrayOfNumbers[4] = bufferArray[2];
                    }
                    
                }
                else if(bufferArray[2] < bufferArray[5])
                {
                    arrayOfNumbers[3] = bufferArray[2];
                    
                }
                
            }
            
        }
    }
    else if (bufferArray[0] < bufferArray[4])
    {
        arrayOfNumbers[0] = bufferArray[0];
        
        if(bufferArray[1] > bufferArray[4])
        {
            arrayOfNumbers[1] = bufferArray[4];
            
            if(bufferArray[1] > bufferArray[5])
            {
                arrayOfNumbers[2] = bufferArray[5];
                
                if(bufferArray[1] > bufferArray[6])
                {
                    arrayOfNumbers[3] = bufferArray[6];
                    
                    if(bufferArray[1] > bufferArray[7])
                    {
                        arrayOfNumbers[4] = bufferArray[7];
                        
                        
                    }
                    else if(bufferArray[1] < bufferArray[5])
                    {
                        arrayOfNumbers[2] = bufferArray[1];
                        
                    }
                    
                }
                else if(bufferArray[1] < bufferArray[6])
                {
                    arrayOfNumbers[2] = bufferArray[1];
                    
                }
                
            }
            else if(bufferArray[1] < bufferArray[5])
            {
                arrayOfNumbers[2] = bufferArray[1];
                
            }
        }
        else if(bufferArray[1] < bufferArray[4])
        {
            arrayOfNumbers[1] = bufferArray[1];
        }
    }
        
    

    for(int printCounter = 0; printCounter < lengthOfArray; printCounter++)
    {
        printf("%i ", arrayOfNumbers[printCounter]);
    }
    printf("\n");
    
    return 0;
}
