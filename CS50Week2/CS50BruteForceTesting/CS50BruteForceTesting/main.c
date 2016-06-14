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
    string username = "levatich";
    string givenhash = "50Bpa7n/23iug";
    char bruteforce[20];
    
    // Brute force check one digit strings
    for (int arrayvalueone1digit = 0; arrayvalueone1digit < 1; arrayvalueone1digit++)
    {
        for (int asciicounterone1digit = 48; asciicounterone1digit <= 122; asciicounterone1digit++)
        {
            bruteforce[arrayvalueone1digit] = (char)asciicounterone1digit;
                    
            crackedpassword = crypt(bruteforce, searchsalt);
            check = strcmp(crackedpassword, givenhash);
            if (check == 0)
            {
                printf("Username: %s\n Encrypted password: %s\nPassword: %s \n", username, givenhash, bruteforce);
                return 0;
            }
        }
    }
    
    // Brute force check two digit strings
    for (int arrayvalueone2digit = 0; arrayvalueone2digit < 1; arrayvalueone2digit++)
    {
        for (int asciicounterone2digit = 48; asciicounterone2digit <= 122; asciicounterone2digit++)
        {
            bruteforce[arrayvalueone2digit] = (char)asciicounterone2digit;
            
            for (int arrayvaluetwo2digit = 1; arrayvaluetwo2digit < 2; arrayvaluetwo2digit++)
            {
                for (int asciicountertwo2digit = 48; asciicountertwo2digit <= 122; asciicountertwo2digit++)
                {
                    bruteforce[arrayvaluetwo2digit] = (char)asciicountertwo2digit;
                            
                    crackedpassword = crypt(bruteforce, searchsalt);
                    check = strcmp(crackedpassword, givenhash);
                    if (check == 0)
                    {
                        printf("Username: %s \nEncrypted password: %s\nPassword: %s \n", username, givenhash, bruteforce);
                        return 0;
                    }
                }
            }
        }
    }

    
    // Brute force check three digit strings
    for (int arrayvalueone3digit = 0; arrayvalueone3digit < 1; arrayvalueone3digit++)
    {
        for (int asciicounterone3digit = 48; asciicounterone3digit <= 122; asciicounterone3digit++)
        {
            bruteforce[arrayvalueone3digit] = (char)asciicounterone3digit;
            
            for (int arrayvaluetwo3digit = 1; arrayvaluetwo3digit < 2; arrayvaluetwo3digit++)
            {
                for (int asciicountertwo3digit = 48; asciicountertwo3digit <= 122; asciicountertwo3digit++)
                {
                    bruteforce[arrayvaluetwo3digit] = (char)asciicountertwo3digit;
                    
                    for (int arrayvaluethree3digit = 2; arrayvaluethree3digit < 3; arrayvaluethree3digit++)
                    {
                        for (int asciicounterthree3digit = 48; asciicounterthree3digit <= 122; asciicounterthree3digit++)
                        {
                            bruteforce[arrayvaluethree3digit] = (char)asciicounterthree3digit;
                            
                            crackedpassword = crypt(bruteforce, searchsalt);
                            check = strcmp(crackedpassword, givenhash);
                            if (check == 0)
                            {
                                printf("Username: %s\nEncrypted password: %s\nPassword: %s \n", username, givenhash, bruteforce);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    
    // Brute force check four digit strings
    for (int arrayvalueone4digit = 0; arrayvalueone4digit < 1; arrayvalueone4digit++)
    {
        for (int asciicounterone4digit = 48; asciicounterone4digit <= 122; asciicounterone4digit++)
        {
            bruteforce[arrayvalueone4digit] = (char)asciicounterone4digit;
            
            for (int arrayvaluetwo4digit = 1; arrayvaluetwo4digit < 2; arrayvaluetwo4digit++)
            {
                for (int asciicountertwo4digit = 48; asciicountertwo4digit <= 122; asciicountertwo4digit++)
                {
                    bruteforce[arrayvaluetwo4digit] = (char)asciicountertwo4digit;
                    
                    for (int arrayvaluethree4digit = 2; arrayvaluethree4digit < 3; arrayvaluethree4digit++)
                    {
                        for (int asciicounterthree4digit = 48; asciicounterthree4digit <= 122; asciicounterthree4digit++)
                        {
                            bruteforce[arrayvaluethree4digit] = (char)asciicounterthree4digit;
                            
                            for (int arrayvaluefour4digit = 3; arrayvaluefour4digit < 4; arrayvaluefour4digit++)
                            {
                                for (int asciicounterfour4digit = 48; asciicounterfour4digit <= 122; asciicounterfour4digit++)
                                {
                                    bruteforce[arrayvaluefour4digit] = (char)asciicounterfour4digit;
                                    
                                    crackedpassword = crypt(bruteforce, searchsalt);
                                    check = strcmp(crackedpassword, givenhash);
                                    if (check == 0)
                                    {
                                        printf("Username: %s \nEncrypted password: %s \nPassword: %s \n", username, givenhash, bruteforce);
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    // Brute force check five digit strings
    for (int arrayvalueone5digit = 0; arrayvalueone5digit < 1; arrayvalueone5digit++)
    {
        for (int asciicounterone5digit = 48; asciicounterone5digit <= 122; asciicounterone5digit++)
        {
            bruteforce[arrayvalueone5digit] = (char)asciicounterone5digit;
            
            for (int arrayvaluetwo5digit = 1; arrayvaluetwo5digit < 2; arrayvaluetwo5digit++)
            {
                for (int asciicountertwo5digit = 48; asciicountertwo5digit <= 122; asciicountertwo5digit++)
                {
                    bruteforce[arrayvaluetwo5digit] = (char)asciicountertwo5digit;
                    
                    for (int arrayvaluethree5digit = 2; arrayvaluethree5digit < 3; arrayvaluethree5digit++)
                    {
                        for (int asciicounterthree5digit = 48; asciicounterthree5digit <= 122; asciicounterthree5digit++)
                        {
                            bruteforce[arrayvaluethree5digit] = (char)asciicounterthree5digit;
                            
                            for (int arrayvaluefour5digit = 3; arrayvaluefour5digit < 4; arrayvaluefour5digit++)
                            {
                                for (int asciicounterfour5digit = 48; asciicounterfour5digit <= 122; asciicounterfour5digit++)
                                {
                                    bruteforce[arrayvaluefour5digit] = (char)asciicounterfour5digit;
                                    
                                    for (int arrayvaluefive5digit = 4; arrayvaluefive5digit < 5; arrayvaluefive5digit++)
                                    {
                                        for (int asciicounterfive5digit = 48; asciicounterfive5digit <= 122; asciicounterfive5digit++)
                                        {
                                            bruteforce[arrayvaluefive5digit] = (char)asciicounterfive5digit;
                                            
                                            crackedpassword = crypt(bruteforce, searchsalt);
                                            check = strcmp(crackedpassword, givenhash);
                                            if (check == 0)
                                            {
                                                printf("Username: %s \nEncrypted password: %s \nPassword: %s \n", username, givenhash, bruteforce);
                                                return 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    // Brute force check six digit strings
    for (int arrayvalueone6digit = 0; arrayvalueone6digit < 1; arrayvalueone6digit++)
    {
        for (int asciicounterone6digit = 48; asciicounterone6digit <= 122; asciicounterone6digit++)
        {
            bruteforce[arrayvalueone6digit] = (char)asciicounterone6digit;
            
            for (int arrayvaluetwo6digit = 1; arrayvaluetwo6digit < 2; arrayvaluetwo6digit++)
            {
                for (int asciicountertwo6digit = 48; asciicountertwo6digit <= 122; asciicountertwo6digit++)
                {
                    bruteforce[arrayvaluetwo6digit] = (char)asciicountertwo6digit;
                    
                    for (int arrayvaluethree6digit = 2; arrayvaluethree6digit < 3; arrayvaluethree6digit++)
                    {
                        for (int asciicounterthree6digit = 48; asciicounterthree6digit <= 122; asciicounterthree6digit++)
                        {
                            bruteforce[arrayvaluethree6digit] = (char)asciicounterthree6digit;
                            
                            for (int arrayvaluefour6digit = 3; arrayvaluefour6digit < 4; arrayvaluefour6digit++)
                            {
                                for (int asciicounterfour6digit = 48; asciicounterfour6digit <= 122; asciicounterfour6digit++)
                                {
                                    bruteforce[arrayvaluefour6digit] = (char)asciicounterfour6digit;
                                    
                                    for (int arrayvaluefive6digit = 4; arrayvaluefive6digit < 5; arrayvaluefive6digit++)
                                    {
                                        for (int asciicounterfive6digit = 48; asciicounterfive6digit <= 122; asciicounterfive6digit++)
                                        {
                                            bruteforce[arrayvaluefive6digit] = (char)asciicounterfive6digit;
                                            
                                            for (int arrayvaluesix6digit = 5; arrayvaluesix6digit < 6; arrayvaluesix6digit++)
                                            {
                                                for (int asciicountersix6digit = 48; asciicountersix6digit <= 122; asciicountersix6digit++)
                                                {
                                                    bruteforce[arrayvaluesix6digit] = (char)asciicountersix6digit;
                                            
                                                    crackedpassword = crypt(bruteforce, searchsalt);
                                                    check = strcmp(crackedpassword, givenhash);
                                                    if (check == 0)
                                                    {
                                                        printf("Username: %s \nEncrypted password: %s \nPassword: %s \n", username, givenhash, bruteforce);
                                                        return 0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // Brute force check seven digit strings
    for (int arrayvalueone7digit = 0; arrayvalueone7digit < 1; arrayvalueone7digit++)
    {
        for (int asciicounterone7digit = 48; asciicounterone7digit <= 122; asciicounterone7digit++)
        {
            bruteforce[arrayvalueone7digit] = (char)asciicounterone7digit;
            
            for (int arrayvaluetwo7digit = 1; arrayvaluetwo7digit < 2; arrayvaluetwo7digit++)
            {
                for (int asciicountertwo7digit = 48; asciicountertwo7digit <= 122; asciicountertwo7digit++)
                {
                    bruteforce[arrayvaluetwo7digit] = (char)asciicountertwo7digit;
                    
                    for (int arrayvaluethree7digit = 2; arrayvaluethree7digit < 3; arrayvaluethree7digit++)
                    {
                        for (int asciicounterthree7digit = 48; asciicounterthree7digit <= 122; asciicounterthree7digit++)
                        {
                            bruteforce[arrayvaluethree7digit] = (char)asciicounterthree7digit;
                            
                            for (int arrayvaluefour7digit = 3; arrayvaluefour7digit < 4; arrayvaluefour7digit++)
                            {
                                for (int asciicounterfour7digit = 48; asciicounterfour7digit <= 122; asciicounterfour7digit++)
                                {
                                    bruteforce[arrayvaluefour7digit] = (char)asciicounterfour7digit;
                                    
                                    for (int arrayvaluefive7digit = 4; arrayvaluefive7digit < 5; arrayvaluefive7digit++)
                                    {
                                        for (int asciicounterfive7digit = 48; asciicounterfive7digit <= 122; asciicounterfive7digit++)
                                        {
                                            bruteforce[arrayvaluefive7digit] = (char)asciicounterfive7digit;
                                            
                                            for (int arrayvaluesix7digit = 5; arrayvaluesix7digit < 6; arrayvaluesix7digit++)
                                            {
                                                for (int asciicountersix7digit = 48; asciicountersix7digit <= 122; asciicountersix7digit++)
                                                {
                                                    bruteforce[arrayvaluesix7digit] = (char)asciicountersix7digit;
                                                    
                                                    for (int arrayvalueseven7digit = 6; arrayvalueseven7digit < 7; arrayvalueseven7digit++)
                                                    {
                                                        for (int asciicounterseven7digit = 48; asciicounterseven7digit <= 122; asciicounterseven7digit++)
                                                        {
                                                            bruteforce[arrayvalueseven7digit] = (char)asciicounterseven7digit;
                                                    
                                                            crackedpassword = crypt(bruteforce, searchsalt);
                                                            check = strcmp(crackedpassword, givenhash);
                                                            if (check == 0)
                                                            {
                                                                printf("Username: %s \nEncrypted password: %s \nPassword: %s \n", username, givenhash, bruteforce);
                                                                return 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    // Brute force check eight digit strings
    for (int arrayvalueone8digit = 0; arrayvalueone8digit < 1; arrayvalueone8digit++)
    {
        for (int asciicounterone8digit = 48; asciicounterone8digit <= 122; asciicounterone8digit++)
        {
            bruteforce[arrayvalueone8digit] = (char)asciicounterone8digit;
            
            for (int arrayvaluetwo8digit = 1; arrayvaluetwo8digit < 2; arrayvaluetwo8digit++)
            {
                for (int asciicountertwo8digit = 48; asciicountertwo8digit <= 122; asciicountertwo8digit++)
                {
                    bruteforce[arrayvaluetwo8digit] = (char)asciicountertwo8digit;
                    
                    for (int arrayvaluethree8digit = 2; arrayvaluethree8digit < 3; arrayvaluethree8digit++)
                    {
                        for (int asciicounterthree8digit = 48; asciicounterthree8digit <= 122; asciicounterthree8digit++)
                        {
                            bruteforce[arrayvaluethree8digit] = (char)asciicounterthree8digit;
                            
                            for (int arrayvaluefour8digit = 3; arrayvaluefour8digit < 4; arrayvaluefour8digit++)
                            {
                                for (int asciicounterfour8digit = 48; asciicounterfour8digit <= 122; asciicounterfour8digit++)
                                {
                                    bruteforce[arrayvaluefour8digit] = (char)asciicounterfour8digit;
                                    
                                    for (int arrayvaluefive8digit = 4; arrayvaluefive8digit < 5; arrayvaluefive8digit++)
                                    {
                                        for (int asciicounterfive8digit = 48; asciicounterfive8digit <= 122; asciicounterfive8digit++)
                                        {
                                            bruteforce[arrayvaluefive8digit] = (char)asciicounterfive8digit;
                                            
                                            for (int arrayvaluesix8digit = 5; arrayvaluesix8digit < 6; arrayvaluesix8digit++)
                                            {
                                                for (int asciicountersix8digit = 48; asciicountersix8digit <= 122; asciicountersix8digit++)
                                                {
                                                    bruteforce[arrayvaluesix8digit] = (char)asciicountersix8digit;
                                                    
                                                    for (int arrayvalueseven8digit = 6; arrayvalueseven8digit < 7; arrayvalueseven8digit++)
                                                    {
                                                        for (int asciicounterseven8digit = 48; asciicounterseven8digit <= 122; asciicounterseven8digit++)
                                                        {
                                                            bruteforce[arrayvalueseven8digit] = (char)asciicounterseven8digit;
                                                            
                                                            for (int arrayvalueeight8digit = 7; arrayvalueeight8digit < 8; arrayvalueeight8digit++)
                                                            {
                                                                for (int asciicountereight8digit = 48; asciicountereight8digit <= 122; asciicountereight8digit++)
                                                                {
                                                                    bruteforce[arrayvalueeight8digit] = (char)asciicountereight8digit;
                                                            
                                                                    crackedpassword = crypt(bruteforce, searchsalt);
                                                                    check = strcmp(crackedpassword, givenhash);
                                                                    if (check == 0)
                                                                    {
                                                                        printf("Username: %s \nEncrypted password: %s \nPassword: %s \n", username, givenhash, bruteforce);
                                                                        return 0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}