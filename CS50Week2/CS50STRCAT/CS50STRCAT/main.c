//
//  CS50Vigenere.c
//  CS50Vigenere
//
//  Created by James Dylan Goldstein on 6/11/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
    char sentencetoencode[100] = "jumparoundand";
    
    char cipherwordtorepeat[100];
    
    for(unsigned long argvcounter = 0, argvlength = strlen(argv[1]); argvcounter < argvlength; argvcounter++)
    {
        cipherwordtorepeat[argvcounter] = argv[1][argvcounter];
    }

    char ciphersentence[100];
    
    int endofwordcounter = 0;
    unsigned long cipherwordlength = strlen(cipherwordtorepeat);
    
    // Take the cipher word and repeat it until it's the same length as the word to encode
    for (unsigned long repeatciphercounter = 0, sentencetoencodelength = strlen(sentencetoencode); repeatciphercounter < sentencetoencodelength; repeatciphercounter++)
    {
        if ((int)sentencetoencode[repeatciphercounter] < 65 || ((int)sentencetoencode[repeatciphercounter] > 90 && (int)sentencetoencode[repeatciphercounter] < 97) || (int)sentencetoencode[repeatciphercounter] > 122)
        {
            ciphersentence[repeatciphercounter] = (char)32;
            
        }
        else
        {
            ciphersentence[repeatciphercounter] = cipherwordtorepeat[endofwordcounter];
            endofwordcounter++;
            if (endofwordcounter >= cipherwordlength)
            {
                endofwordcounter = 0;
            }
        }
    }
    
    printf("%s\n", ciphersentence);
    
    return 0;
}
