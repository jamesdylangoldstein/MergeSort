//
//  main.c
//  ArgvTestNoCS50
//
//  Created by James Dylan Goldstein on 6/7/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    for(int counter = 0, length = strlen(argv[1]); counter < length; counter++)
    {
        printf("%c", argv[1][counter]);
    }
    return 0;
}
