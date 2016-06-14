//
//  CS50Vigenere.c
//  CS50Vigenere
//
//  Created by James Dylan Goldstein on 6/11/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char* CipherRepeater(char* sentencetoencode, char* cipherwordtorepeat, char* ciphersentence);

int main(int argc, char * argv[])
{
    // This is a message to encode using Vigenere cipher
    char sentencetoencode[100] = "secret message is come over at five";
    
    // Pass a word at command line, then assign that word to cipherwordtorepeat
    // This word is the Vigenere encoding key
    // Example word: cat
    char cipherwordtorepeat[100];
    
    for(unsigned long argvcounter = 0, argvlength = strlen(argv[1]); argvcounter < argvlength; argvcounter++)
    {
        cipherwordtorepeat[argvcounter] = argv[1][argvcounter];
    }
    
    // Now the word cat needs to be repeated until it matches the length of the message
    // Example "secret message is come over at five"
    //         "catcat catcatc at catc atca tc atca"
    // Declare an array of characters
    // Then the function fills the array with the repeating word
    char ciphersentence[100];
    CipherRepeater(sentencetoencode, cipherwordtorepeat, ciphersentence);
    
    printf("%s\n", ciphersentence);
    
    return 0;
}

char* CipherRepeater(char* sentencetoencode, char* cipherwordtorepeat, char* ciphersentence)
{
    // Create a counter to make sure to go back to char 0 in the word array when end is reached
    int endofwordcounter = 0;
    unsigned long cipherwordlength = strlen(cipherwordtorepeat);
    
    // Take the cipher word and repeat it until it's the same length as the word to encode
    for (unsigned long repeatciphercounter = 0, sentencetoencodelength = strlen(sentencetoencode); repeatciphercounter < sentencetoencodelength; repeatciphercounter++)
    {
        // Put a space in the new string in any spot where a non-letter is used
        if ((int)sentencetoencode[repeatciphercounter] < 65 || ((int)sentencetoencode[repeatciphercounter] > 90 && (int)sentencetoencode[repeatciphercounter] < 97) || (int)sentencetoencode[repeatciphercounter] > 122)
        {
            ciphersentence[repeatciphercounter] = (char)32;
        }
        else
        {
            // Copy the character
            ciphersentence[repeatciphercounter] = cipherwordtorepeat[endofwordcounter];
            endofwordcounter++;
            if (endofwordcounter >= cipherwordlength)
            {
                endofwordcounter = 0;
            }
        }
    }
    
    return 0;
}