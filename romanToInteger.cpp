#include <iostream>
#include <stdio.h>


int someInt = 1231;
short someShort = 1412;
float someFloat = 3456;
extern int someExterInt;

int main(){
    short array[23];
    int integer = 129769;
    struct car{
        int number = 345;
        char mark = 'd';
        const char* someCstring = "some c rudiment string";
    };
    struct car mercedes;

    printf("%s", mercedes.someCstring);
}