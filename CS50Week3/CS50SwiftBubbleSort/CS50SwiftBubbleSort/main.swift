//
//  main.swift
//  CS50SwiftBubbleSort
//
//  Created by James Dylan Goldstein on 6/19/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

import Foundation

var numberArray = [7, 6, 5, 4, 3, 2, 1]

var swapCounter: Int
var bubbleCounter: Int
var numToCompare: Int
var evenCounter: Int = 2

print (numberArray)

repeat {
    swapCounter = 0
    
    if (evenCounter % 2 == 0) {
        bubbleCounter = 0
        numToCompare = 1
    }
    else {
        bubbleCounter = 1
        numToCompare = 2
    }
    
    while (bubbleCounter < numberArray.count) {
    
        if (numToCompare > bubbleCounter) {
            if (numberArray[bubbleCounter] > numberArray[numToCompare]) {
                swapCounter += 1
                var intBuffer = numberArray[bubbleCounter]
                numberArray[bubbleCounter] = numberArray[numToCompare]
                numberArray[numToCompare] = intBuffer
            }
        }
        else {
            if (numberArray[bubbleCounter] < numberArray[numToCompare]) {
                swapCounter += 1
                var intBuffer = numberArray[numToCompare]
                numberArray[numToCompare] = numberArray[bubbleCounter]
                numberArray[bubbleCounter] = intBuffer
            }
        }
        
        bubbleCounter += 2
        numToCompare += 2
        
        if (numToCompare > (numberArray.count - 1)) {
            numToCompare = 0
        }
    }

    evenCounter += 1
    
} while (swapCounter != 0)

print (numberArray)


