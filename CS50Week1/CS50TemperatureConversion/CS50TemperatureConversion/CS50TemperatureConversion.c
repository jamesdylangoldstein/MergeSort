//
//  temperature.c
//  CS501
//
//  Created by James Dylan Goldstein on 5/30/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include "cs50.h"

int fconvert(){
    printf("Enter a temperature in Farenheit:\n");
    float temperatureinf = GetFloat();
    printf("You entered %.1f Farenheit.\n", temperatureinf);
    float temperatureinc = (temperatureinf - 32.0) * 5.0 / 9.0;
    printf("That temperature in Celsius is: %.1f\n", temperatureinc);
    float temperatureink = (temperatureinf + 459.67) * 5.0 / 9.0;
    printf("That temperature in Kelvin is: %.1f\n", temperatureink);
    return 0;
}

int cconvert(){
    printf("Enter a temperature in Celsius:\n");
    float temperatureinc = GetFloat();
    printf("You entered %.1f Celsius.\n", temperatureinc);
    float temperatureinf = temperatureinc * 5.0 / 9.0 + 32;
    printf("That temperature in Farenheit is: %.1f\n", temperatureinf);
    float temperatureink = temperatureinc + 273.15;
    printf("That temperature in Kelvin is: %.1f\n", temperatureink);
    return 0;
}

int kconvert(){
    printf("Enter a temperature in Kelvin:\n");
    float temperatureink = GetFloat();
    printf("You entered %.1f Kelvin.\n", temperatureink);
    float temperatureinc = temperatureink - 273.15;
    printf("That temperature in Celsius is: %.1f\n", temperatureinc);
    float temperatureinf = (temperatureink * 9.0 / 5.0) - 459.67;
    printf("That temperature in Farenheit is: %.1f\n", temperatureinf);
    return 0;
}

int appchooser(choice){
    if((int)choice == 70 || (int)choice == 102){
        fconvert();
    }
    else if((int)choice == 67 || (int)choice == 99){
        cconvert();
    }
    else if((int)choice == 75 || (int)choice == 107){
        kconvert();
    }
    return 0;
}

int fck(){
    char choice;
    
    printf("Type 'f' if you're starting with Farenheit.\n");
    printf("Type 'c' if you're starting with Celsius.\n");
    printf("Type 'k' if you're starting with Celsius.\n");
    
    choice = GetChar();
    if((int)choice == 70 || (int)choice == 102){
        appchooser(choice);
    }
    else if((int)choice == 67 || (int)choice == 99){
        appchooser(choice);
    }
    else if((int)choice == 75 || (int)choice == 107){
        appchooser(choice);
    }
    else{
        fck();
    }
    return 0;
}

int main(void){
    char runagain;
    
    printf("Farenheit, Celsius, and Kelvin temperature conversion:\n");
    
    fck();
    
    printf("Would you like to make another conversion?\n");
    printf("Type 'y' for yes or 'n' for no.\n");
    runagain = GetChar();
    
    if(runagain == 89 || runagain == 121){
        main();
    }
    
}

