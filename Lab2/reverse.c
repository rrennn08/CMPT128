/*
 * Filename: reverse.c
 * 
 * Description: Takes inputted sequence of 10 numbers, prints that sequence as an array, reverses it, and then prints out the reversed array.
 * 
 * Author: Darren Fok
 * Date: September 30th, 2021
 */

#include <stdio.h>

int main ( void ){
    const unsigned int arraySize = 10;
    int intArray[arraySize];
    int loop;
    int temp; //will use this to swap numbers
    

    //Ask user to input 10 integers and then press enter
    printf("Please, enter 10 integers and then press Enter: ");
    
    //Allow user to input
    for(loop = 0; loop < arraySize; loop++){
        scanf("%d", &intArray[loop]);
    }

    //Print out array that user has inputted
    printf("Content of array before reversing: ");
    for(loop = 0; loop < arraySize; loop++){
        printf("%d ", intArray[loop]);
    }

    //Reverse array
    loop = 0;
    int loopReverse = arraySize-1;
    while (loop < loopReverse){
        temp = intArray[loop];
        intArray[loop] = intArray[loopReverse];
        intArray[loopReverse] = temp;

        loop++;
        loopReverse--;
    }

    //Print out reversed array
    printf("\nContent of array after reversing: ");
    for(loop = 0; loop < arraySize; loop++){
        printf("%d ", intArray[loop]);
    }
    
    printf("\n");

    return 0;
}