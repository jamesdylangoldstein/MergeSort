//
//  CS50StringIter.c
//  CS50StringIter
//
//  Created by James Dylan Goldstein on 6/5/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "cs50.h"

int main(void) {
    
    printf("Type a string: ");
    
    string name = GetString();
    
    printf("\n");
    
    for(int counter = 0, name_length = strlen(name); counter < name_length; counter++)
    {
        if(counter == 0)
        {
            printf("%c", toupper(name[counter]));
        }
        else
        {
            printf("%c", tolower(name[counter]));
        }
    }
    
    printf("\n\n");
    
    for(char letter = 'A'; letter <= 'Z'; letter++)
    {
        printf("Letter %c is #%i ASCII.\n", letter, (int)letter);
    }
    for(char letter = 'a'; letter <= 'z'; letter++)
    {
        printf("Letter %c is #%i ASCII.\n", letter, (int)letter);
    }
    //Auto converts 'a' - 'A' to an int.  Which is 97 - 32 = 65, which is ASCII for A
    for(int letter = 97 - ('a' - 'A'); letter <= 'Z'; letter++)
    {
        printf("Letter %c is #%i ASCII.\n", letter, (int)letter);
    }
    
    return 0;
}
