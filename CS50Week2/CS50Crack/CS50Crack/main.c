//
//  main.c
//  CS50Crack
//
//  Created by James Dylan Goldstein on 6/8/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "cs50.h"
#define _XOPEN_SOURCE

char *crypt(const char *key, const char *salt);
//char *crypt_r(const char *key, const char *salt, struct crypt_data *data);

#define _GNU_SOURCE

int main(int argc, const char * argv[])
{
    string password = "123";
    
    string searchsalt = "50";
    
    string hashedpassword = crypt(password, searchsalt);
    
    printf("%s\n", hashedpassword);
    
    
    return 0;
}
