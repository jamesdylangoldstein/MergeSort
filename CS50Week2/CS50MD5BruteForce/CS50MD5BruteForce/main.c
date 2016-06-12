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
#define _GNU_SOURCE

char *crypt(const char *key, const char *salt);
//char *crypt_r(const char *key, const char *salt, struct crypt_data *data);

int main(int argc, const char * argv[])
{
    string searchsalt = "50";
    string crackedpassword;
    int check;
    string givenhash = "50zPJlUFIYY0o";
    
    char bruteforce[255];
    
    for (int arrayvalueone = 0; arrayvalueone < 3; arrayvalueone++)
    {
        for (int asciicounterone = 0; asciicounterone <= 126; asciicounterone++)
        {
            bruteforce[arrayvalueone] = (char)asciicounterone;
            
            
            for (int arrayvaluetwo = 1; arrayvaluetwo < 3; arrayvaluetwo++)
            {
                for (int asciicountertwo = 0; asciicountertwo <= 126; asciicountertwo++)
                {
                    bruteforce[arrayvaluetwo] = (char)asciicountertwo;
                    
                    
                    for (int arrayvaluethree = 2; arrayvaluethree < 3; arrayvaluethree++)
                    {
                        for (int asciicounterthree = 0; asciicounterthree <= 126; asciicounterthree++)
                        {
                            bruteforce[arrayvaluethree] = (char)asciicounterthree;
                            
                            
                            for (int arrayvaluefour = 2; arrayvaluefour < 3; arrayvaluefour++)
                            {
                                for (int asciicounterfour = 0; asciicounterfour <= 126; asciicounterfour++)
                                {
                                    bruteforce[arrayvaluefour] = (char)asciicounterthree;
                                    printf("%s\n", bruteforce);
                                    /*
                                    crackedpassword = crypt(bruteforce, searchsalt);
                                    check = strcmp(crackedpassword, givenhash);
                                    if (check == 0)
                                    {
                                        printf("The password is: %s", bruteforce);
                                    }
                                    */
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    /*
     crackedpassword = crypt(bruteforce, searchsalt);
     check = strcmp(crackedpassword, givenhash);
     if (check == 0)
     {
     printf("The password is: %s", bruteforce);
     }
     */
    
    return 0;
}
