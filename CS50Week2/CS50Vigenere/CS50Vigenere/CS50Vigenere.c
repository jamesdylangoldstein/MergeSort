//
//  CS50Vigenere.c
//  CS50Vigenere
//
//  Created by James Dylan Goldstein on 6/11/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    //printf("Enter a word or sentence to encode: ");
    char wordtoencode[100] = "Meet me at the park at eleven am.  Zz! And, bring.";
    printf("%s\n", wordtoencode);
    //printf("Enter a cipher word: ");
    char cipherwordtorepeat[50] = "bacon";
    
    // DOES NOT WORK UNLESS ALL CAPS
    //FOUR IF STATEMENTS
    //UPPER/UPPER, UPPER/LOWER, LOWER/LOWER, LOWER/UPPER
    
    
    // Obtain the lengths for the word to be encoded and the cipher
    unsigned long wordtoencodelength = strlen(wordtoencode);
    unsigned long cipherwordlength = strlen(cipherwordtorepeat);
    
    char cipherword[wordtoencodelength + 50];
    char encryptedword[wordtoencodelength + 50];
    
    
    int endofwordcounter = 0;
    
    // Take the cipher word and repeat it until it's the same length as the word to encode
    for (int repeatciphercounter = 0; repeatciphercounter < wordtoencodelength; repeatciphercounter++)
    {
        if ((int)wordtoencode[repeatciphercounter] < 65 || ((int)wordtoencode[repeatciphercounter] > 90 && (int)wordtoencode[repeatciphercounter] < 97) || (int)wordtoencode[repeatciphercounter] > 122)
        {
            cipherword[repeatciphercounter] = (char)32;
            
        }
        else
        {
            cipherword[repeatciphercounter] = cipherwordtorepeat[endofwordcounter];
            endofwordcounter++;
            if (endofwordcounter >= cipherwordlength)
            {
                endofwordcounter = 0;
            }
        }
    }
     
    printf("%s\n", cipherword);
    

    
    for (int lettercounter = 0; lettercounter < wordtoencodelength; lettercounter++)
    {
        if ((int)wordtoencode[lettercounter] > 64 && (int)wordtoencode[lettercounter] < 91 && cipherword[lettercounter] > 64 &&  cipherword[lettercounter] < 91)
        {
            if ((int)cipherword[lettercounter] != 65)
            {
                int newletter = ((int)cipherword[lettercounter] - 65) + (int)wordtoencode[lettercounter];
                if (newletter > 90)
                {
                    newletter = newletter - 90 + 64;
                    char newchar = (char)newletter;
                    encryptedword[lettercounter] = newchar;
                }
                else
                {
                    char newchar = (char)newletter;
                    encryptedword[lettercounter] = newchar;
                }
            }
            else if ((int)cipherword[lettercounter] == 65)
            {
                int newletter = (int)wordtoencode[lettercounter];
                char newchar = (char)newletter;
                encryptedword[lettercounter] = newchar;
            }
        }
        else if ((int)wordtoencode[lettercounter] > 64 && (int)wordtoencode[lettercounter] < 91 && cipherword[lettercounter] > 96 &&  cipherword[lettercounter] < 123)
        {
            if ((int)cipherword[lettercounter] != 96)
            {
                int newletter = ((int)cipherword[lettercounter] - 97) + (int)wordtoencode[lettercounter];
                if (newletter > 90)
                {
                    newletter = newletter - 90 + 64;
                    char newchar = (char)newletter;
                    encryptedword[lettercounter] = newchar;
                }
                else
                {
                    char newchar = (char)newletter;
                    encryptedword[lettercounter] = newchar;
                }
            }
            else if ((int)cipherword[lettercounter] == 65)
            {
                int newletter = (int)wordtoencode[lettercounter];
                char newchar = (char)newletter;
                encryptedword[lettercounter] = newchar;
            }
        }
        else if ((int)wordtoencode[lettercounter] > 96 && (int)wordtoencode[lettercounter] < 123 && cipherword[lettercounter] > 64 &&  cipherword[lettercounter] < 91)
        {
            if ((int)cipherword[lettercounter] != 65)
            {
                int newletter = ((int)cipherword[lettercounter] - 65) + (int)wordtoencode[lettercounter];
                if (newletter > 122)
                {
                    newletter = newletter - 122 + 96;
                    char newchar = (char)newletter;
                    encryptedword[lettercounter] = newchar;
                }
                else
                {
                    char newchar = (char)newletter;
                    encryptedword[lettercounter] = newchar;
                }
            }
            else if ((int)cipherword[lettercounter] == 97)
            {
                int newletter = (int)wordtoencode[lettercounter];
                char newchar = (char)newletter;
                encryptedword[lettercounter] = newchar;
            }
        }
        else if ((int)wordtoencode[lettercounter] > 96 && (int)wordtoencode[lettercounter] < 123 && cipherword[lettercounter] > 96 &&  cipherword[lettercounter] < 123)
        {
            if ((int)cipherword[lettercounter] != 97)
            {
                int newletter = ((int)cipherword[lettercounter] - 97) + (int)wordtoencode[lettercounter];
                if (newletter > 122)
                {
                    newletter = newletter - 122 + 96;
                    char newchar = (char)newletter;
                    encryptedword[lettercounter] = newchar;
                }
                else
                {
                    char newchar = (char)newletter;
                    encryptedword[lettercounter] = newchar;
                }
            }
            else if ((int)cipherword[lettercounter] == 97)
            {
                int newletter = (int)wordtoencode[lettercounter];
                char newchar = (char)newletter;
                encryptedword[lettercounter] = newchar;
            }
        }
        else
        {
            int newletter = (int)wordtoencode[lettercounter];
            char newchar = (char)newletter;
            encryptedword[lettercounter] = newchar;
        }
    }
    
    printf("%s\n", encryptedword);
    
    return 0;
}
