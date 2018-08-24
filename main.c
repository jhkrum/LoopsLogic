/****************************************************************
 <br>
 <br> Subject:            Loops and Decision Statements
 <br> Project:            Assignment04
 <br> Author:             Justin H. Krum
 <br> Creation Date:      October 31, 2017
 <br> Last Modification:  October 31, 2017

 ****************************************************************/

 /****************************************************************
 VAR NAME           TYPE        PURPOSE

 sumOfTen           int         To serve as the sum of all even numbers from 1 to 10
 twoToTheN          int         To track 2^N for 0 <= N <=16
 factorialValue     int         To calculate the value of a factorial(n) for 1 <= n <= 10
 i                  int         To count in for loops
 j                  int         To count in for loops

 ****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Initialize variable for sum of all even numbers
    int sumOfTen = 0;


    //Calculate sum of all even numbers 1 -> 10
    for(int i=0; i < 11; i+=2){
        sumOfTen += i;
    }

    printf("------------------------------------------------------------");
    printf("\n\nThe sum of all even numbers between 1 and 10 is %d.", sumOfTen);
    printf("\n\n------------------------------------------------------------\n\n");

    //Calculate the powers of 2^N for 0-->16 for N
    for(int i = 0; i < 17; i++){

        int twoToTheN = pow(2, i);

        //Output 2^N
        printf("2 to the power of %d: %d\n", i, twoToTheN);
    }

    printf("\n------------------------------------------------------------\n");

    //Counts from 1 to 10 as the base
    for(int i = 1; i < 11; i++){

        //Sets factorialValue to 1 as a floor
        int factorialValue = 1;

        //Multiplies factorialValue by itself for every value i --> 0 in descending order
        for(int j = i; j > 0; j--){
            factorialValue *= j;
        }

        //Output the factorialValue calculation from 1 --> 10
        printf("\nFactorial of  %d: %d", i, factorialValue);
    }

    printf("\n\n------------------------------------------------------------");


    return 0;
}
