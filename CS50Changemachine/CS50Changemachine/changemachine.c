//
//  main.c
//  CS50Changemachine
//
//  Created by James Dylan Goldstein on 6/3/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

int changemachine(moneytobechanged){
    int numhundollars, numfiftydollars, numtwentydollars, numtendollars, numfivedollars, numonedollars, numquarters, numdimes, numnickles, numpennies;
    
    numhundollars = moneytobechanged / 10000;
    moneytobechanged = moneytobechanged % 10000;
    printf("Give customer %i one-hundred dollar bills.\n", numhundollars);
    
    numfiftydollars = moneytobechanged / 5000;
    moneytobechanged = moneytobechanged % 5000;
    printf("Give customer %i fifty dollar bills.\n", numfiftydollars);
    
    numtwentydollars = moneytobechanged / 2000;
    moneytobechanged = moneytobechanged % 2000;
    printf("Give customer %i twenty dollar bills.\n", numtwentydollars);
    
    numtendollars = moneytobechanged / 1000;
    moneytobechanged = moneytobechanged % 1000;
    printf("Give customer %i ten dollar bills.\n", numtendollars);
    
    numfivedollars = moneytobechanged / 500;
    moneytobechanged = moneytobechanged % 500;
    printf("Give customer %i five dollar bills.\n", numfivedollars);

    numonedollars = moneytobechanged / 100;
    moneytobechanged = moneytobechanged % 100;
    printf("Give customer %i one dollar bills.\n", numonedollars);
    
    numquarters = moneytobechanged / 25;
    moneytobechanged = moneytobechanged % 25;
    printf("Give customer %i quarters.\n", numquarters);
    
    numdimes = moneytobechanged / 10;
    moneytobechanged = moneytobechanged % 10;
    printf("Give customer %i dimes.\n", numdimes);
    
    numnickles = moneytobechanged / 5;
    moneytobechanged = moneytobechanged % 5;
    printf("Give customer %i nickles.\n", numnickles);
    
    numpennies = moneytobechanged / 1;
    moneytobechanged = moneytobechanged % 1;
    printf("Give customer %i pennies.\n", numpennies);

    return 0;
}

int main(void) {
    printf("Cash Register:\n");
    
    printf("Enter the total number of items customer purchased: ");
    int numitems = GetInt();
    
    float currentitem;
    float totalcost = 0;
    for(int counter = 1; counter <= numitems; counter++){
        printf("Enter the cost of item #%i: ", counter);
        currentitem = GetFloat();
        while(currentitem <= 0){
            printf("Enter a positive number:");
            currentitem = GetFloat();
        }
        totalcost += currentitem;

    }
    printf("The total cost is: %.2f.\n", totalcost);
    
    printf("Enter the amount customer is paying with:");
    float payingamount = GetFloat();
    
    while(payingamount < totalcost){
        printf("The amount customer is paying with does not cover the bill. Enter new amount: ");
        payingamount = GetFloat();
    }
    
    float totalchange = -1.0*(totalcost - payingamount);
    printf("Total change is: %.2f.\n", totalchange);
    int moneytobechanged = totalchange * 100;
    changemachine(moneytobechanged);
    
}
