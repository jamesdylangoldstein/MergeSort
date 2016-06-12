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
#define _XOPEN_SOURCE
#define _GNU_SOURCE

char *crypt(const char *key, const char *salt);
//char *crypt_r(const char *key, const char *salt, struct crypt_data *data);

int main(int argc, const char * argv[])
{
    char bruteforce[255];
    
    /*
    for (int arrayvalueone = 0; arrayvalueone < 1; arrayvalueone++)
    {
        for (int asciicounterone = 48; asciicounterone <= 122; asciicounterone++)
        {
            bruteforce[arrayvalueone] = (char)asciicounterone;
            
            printf("%s\n", bruteforce);
        }
    }
    */
    
    // Brute force check four digit strings
    
    for (int arrayvalueone = 0; arrayvalueone < 1; arrayvalueone++)
    {
        for (int asciicounterone = 48; asciicounterone <= 122; asciicounterone++)
        {
            bruteforce[arrayvalueone] = (char)asciicounterone;
            
            for (int arrayvaluetwo = 1; arrayvaluetwo < 2; arrayvaluetwo++)
            {
                for (int asciicountertwo = 48; asciicountertwo <= 122; asciicountertwo++)
                {
                    bruteforce[arrayvaluetwo] = (char)asciicountertwo;
                    
                    for (int arrayvaluethree = 2; arrayvaluethree < 3; arrayvaluethree++)
                    {
                        for (int asciicounterthree = 48; asciicounterthree <= 122; asciicounterthree++)
                        {
                            bruteforce[arrayvaluethree] = (char)asciicounterthree;
                            
                            for (int arrayvaluefour = 3; arrayvaluefour < 4; arrayvaluefour++)
                            {
                                for (int asciicounterfour = 48; asciicounterfour <= 122; asciicounterfour++)
                                {
                                    bruteforce[arrayvaluefour] = (char)asciicounterfour;
                    
                                    
                                }
                            }
                        }
                    }
                }
            }
            
        }
    }
   
    
    /*
    for (int arrayvalueone = 0; arrayvalueone < 1; arrayvalueone++)
    {
        for (int asciicounterone = 48; asciicounterone <= 122; asciicounterone++)
        {
            bruteforce[arrayvalueone] = (char)asciicounterone;
            
            
            for (int arrayvaluetwo = 0; arrayvaluetwo < 2; arrayvaluetwo++)
            {
                for (int asciicountertwo = 48; asciicountertwo <= 122; asciicountertwo++)
                {
                    bruteforce[arrayvaluetwo] = (char)asciicountertwo;
                    
                    
                    for (int arrayvaluethree = 0; arrayvaluethree < 3; arrayvaluethree++)
                    {
                        for (int asciicounterthree = 48; asciicounterthree <= 122; asciicounterthree++)
                        {
                            bruteforce[arrayvaluethree] = (char)asciicounterthree;
                            
                            printf("%s\n", bruteforce);
                        }
                    }
                }
            }
        }
    }
    */
    return 0;
}