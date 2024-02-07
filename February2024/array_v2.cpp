#define LENGTH 3
#include <stdio.h>

const char* someFunc(int d){
    const char* some = "akdsfj";
    if(d == 1) printf("some shit \n");
    if(d == 2) printf("some other shit \n");
    if(d == 3) printf("some another shit \n");
    if(d == 4) printf("some very other shit \n");
    return some;
}

int main(){

    int array[] {4, 6, 3, 2, 8};


    for(int i = 0; i< 5; i++){
        printf("%i ", array[i]);
    }
    printf("\n");

    someFunc(LENGTH);
    return 0;
}