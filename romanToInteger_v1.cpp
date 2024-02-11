#include <iostream>
#include <stdio.h>


char R_array[] {'I', 'V', 'X', 'L', 'C', 'M'};
char I_array[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
char R_array_length = sizeof(R_array)/ sizeof(*R_array) - 1;  //dereferencing the name of the array
char given_R_array[]{};
//char* ptr =(char*) malloc(sizeof(char));
int integer;
const char* text = "enter the integer number";

int main(){
    puts(text);
    scanf("%u", integer);
    int num = 123456; // Example integer
    int numArray[10]; // Array to store individual digits (assuming maximum 10 digits)
    int i = 0;

    // Extract individual digits and store them in the array
    while (num > 0) {
        numArray[i++] = num % 10; // Extract the last digit
        num /= 10; // Remove the last digit
    }

}