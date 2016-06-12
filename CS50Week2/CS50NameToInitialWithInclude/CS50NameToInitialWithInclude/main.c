//
//  main.c
//  CS50NameToInitials
//
//  Created by James Dylan Goldstein on 6/9/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(int argc, const char * argv[]) {
    string name;
    string initials = "    ";
    printf("Type your name: ");
    name = GetString();
    
    for (unsigned long counter = 0, stringlength = strlen(name); counter < stringlength; counter++)
    {
        if ((int)name[counter] >= 65 && (int)name[counter] <= 90)
        {
            printf("%c", name[counter]);
            initials = strcat(initials, &name[counter]);
        }
    }
    
    printf("%s", initials);
    return 0;
}