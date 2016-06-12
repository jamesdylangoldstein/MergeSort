//
//  main.c
//  FunctionString
//
//  Created by James Dylan Goldstein on 6/7/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 255

int main(int argc, const char * argv[])
{
    printf("Type a paragraph: \n");
    char sentence[MAX_STRING_LEN];
    scanf("%[^\t\n]", sentence);
    printf("%s\n", sentence);
    
    
    
    
    printf("Type a word to find: \n");
    char word[MAX_STRING_LEN];
    scanf("%s", word);
    printf("%s\n", word);
    
    unsigned int howmanymatchesloop = 0;
    unsigned int howmanymatchestotal = 0;
    
    for (unsigned long long countera = 0, untila = strlen(sentence); countera < untila; countera++)
    {
        unsigned int counterb = 0;
        if (sentence[countera] == word[counterb])
        {
            howmanymatchesloop++;
            for (unsigned long long counterc = 1, untilb = strlen(word); counterc < untilb; counterc++)
            {
                if (sentence[countera + counterc] == word[counterb + counterc])
                {
                    howmanymatchesloop++;
                }
            }
        }
        
        if (howmanymatchesloop == strlen(word))
        {
            howmanymatchestotal++;
        }
        howmanymatchesloop = 0;
    }
    
    
    printf("There were %i matches.", howmanymatchestotal);
    
    return 0;
}
                              
