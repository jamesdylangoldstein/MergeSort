//
//  main.c
//  CS50BadCreditTesting
//
//  Created by James Dylan Goldstein on 6/5/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void) {
    unsigned long long creditcard;
    string creditcardlength;
    
    printf("Type your credit card number.\nMake sure it is 13, 15, or 16 digits:\n");
        
    creditcard = GetLongLong();
    
    printf("CC: %llu", creditcard);
    
    const int n = snprintf(NULL, 0, "%llu", creditcard);
    assert(n > 0);
    char buf[n+1];
    int c = snprintf(buf, n+1, "%llu", creditcard);
    assert(buf[n] == '\0');
    assert(c == n);
    
    return 0;
}
