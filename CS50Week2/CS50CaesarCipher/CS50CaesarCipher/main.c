//
//  main.c
//  CS50CaesarCipher
//
//  Created by James Dylan Goldstein on 6/9/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char textinput[255];
    char newtext[255];

    if(argv[1] == '\0')
    {
        printf("No key passed. Exiting!");
        return 0;
    }
    
    int key;
    key = atoi(argv[1]);
    
    printf("Type the strings to be encrypted: ");
    scanf("%[^\t\n]", textinput);
    
    if (key > 26)
    {
        key = key % 26;
    }
    
    for(unsigned long long counter = 0, stringlength = strlen(textinput); counter < stringlength; counter++)
    {
        int newletter = (int)textinput[counter] + key;
        
        if((int)textinput[counter] >= 65 && (int)textinput[counter] <= 90)
        {
            
            if(newletter > 90)
            {
                newletter = (newletter - 90) + 64;
                char newchar = (char)newletter;
                newtext[counter] = newchar;
            }
            else
            {
                char newchar = (char)newletter;
                newtext[counter] = newchar;
            }
        }
        else if((int)textinput[counter] >= 97 && (int)textinput[counter] <= 122)
        {
            
            if(newletter > 122)
            {
                newletter = (newletter - 122) + 96 ;
                char newchar = (char)newletter;
                newtext[counter] = newchar;
            }
            else
            {
                char newchar = (char)newletter;
                newtext[counter] = newchar;
            }
        }
        else
        {
            char copyofchar = textinput[counter];
            newtext[counter] = copyofchar;
        }
    }
    
    printf("%s\n", newtext);
    
    return 0;
    
}
