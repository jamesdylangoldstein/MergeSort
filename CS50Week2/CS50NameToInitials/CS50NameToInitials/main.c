//
//  main.c
//  CS50NameToInitials
//
//  Created by James Dylan Goldstein on 6/9/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 255

int main(int argc, const char * argv[]) {
    char name[MAX_STRING_LEN];
    
    printf("Type your name: ");
    scanf("%[^\t\n]", name);
    
    char initials[MAX_STRING_LEN];
    
    for (unsigned long counter = 0, stringlength = strlen(name); counter < stringlength; counter++)
    {
        if ((int)name[counter] >= 65 && (int)name[counter] <= 90)
        {
            char tempcopyinitials;
            tempcopyinitials = name[counter];
            strcat(initials, &tempcopyinitials);
        }
        
    }
    
    printf("%s\n", initials);
    return 0;
}
