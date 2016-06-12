//
//  main.c
//  CS50ValidTriangle
//
//  Created by James Dylan Goldstein on 6/8/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include "cs50.h"

double TrianglePermissible(double sidea, double sideb, double sidec);

int main(int argc, const char * argv[]) {
    double sidea, sideb, sidec;
    
    do
    {
    printf("Enter the length of side A: ");
    sidea = GetDouble();
    printf("Enter the length of side B: ");
    sideb = GetDouble();
    printf("Enter the length of side C: ");
    sidec = GetDouble();
    }
    while (sidea <= 0 && sideb <= 0 && sidec <= 0);
    
    TrianglePermissible(sidea, sideb, sidec);
    
    return 0;
}

double TrianglePermissible(double sidea, double sideb, double sidec)
{
    if (sidea > sideb)
    {
        if (sidea > sidec)
        {
            // Side A biggest
            if (sidec > sideb)
            {
                // Side C middle
                // Side B smallest
                if (sidea < sideb + sidec && sidea > sidec - sideb)
                {
                    printf("Valid triangle");
                }
                else
                {
                    printf("Invalid triangle");
                }
            }
            else
            {
                // Side B middle
                // Side C smallest
                if (sidea < sideb + sidec && sidea > sideb - sidec)
                {
                    printf("Valid triangle");
                }
                else
                {
                    printf("Invalid triangle");
                }
            }
        }
    }
    else if (sideb > sidec)
    {
        if (sideb > sidea)
        {
            // Side B biggest
            if (sidea > sidec)
            {
                // Side A middle
                // Side C smallest
                if (sideb < sidea + sidec && sideb > sidea - sidec)
                {
                    printf("Valid triangle");
                }
                else
                {
                    printf("Invalid triangle");
                }
            }
            else
            {
                //Side C middle
                //Side A smallest
                if (sideb < sidea + sidec && sideb > sidec - sidea)
                {
                    printf("Valid triangle");
                }
                else
                {
                    printf("Invalid triangle");
                }
            }
        }
    }
    else if (sidec > sideb)
    {
        if (sidec > sidea)
        {
            //Side C biggest
            if (sidea > sideb)
            {
                //Side A middle
                //Side B smallest
                if (sidec < sidea + sideb && sidec > sidea - sideb)
                {
                    printf("Valid triangle");
                }
                else
                {
                    printf("Invalid triangle");
                }
            }
            else
            {
                //Side B middle
                //Side A smallest
                if (sidec < sidea + sideb && sidec > sideb - sidea)
                {
                    printf("Valid triangle");
                }
                else
                {
                    printf("Invalid triangle");
                }
            }
        }
    }
    else if (sidea == sideb && sidea == sidec)
    {
        printf("Valid triangle");
    }
    else if (sidea == sideb)
    {
        if (sidec < sidea + sideb)
        {
            printf("Valid triangle");
        }
        else
        {
            printf("Invalid triangle");
        }
    }
    else if (sideb == sidec)
    {
        if (sidea < sideb + sidec)
        {
            printf("Valid triangle");
        }
        else
        {
            printf("Invalid triangle");
        }
    }
    else if (sidea == sidec)
    {
        if (sideb < sidea + sidec)
        {
            printf("Valid triangle");
        }
        else
        {
            printf("Invalid triangle");
        }
    }
    
    return 0;
}
