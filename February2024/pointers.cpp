#include <stdio.h>

int main(){
    char someChar = 'j';
    short someShort = 15098;
    short* ptrToSomeShort = &someShort;
    void* voidPtrToSomeShort = (void*)ptrToSomeShort;
    char* ptrToChar = &someChar;
    int* intPtr = (int*)ptrToChar;
    printf("%p \n", ptrToChar);
    printf("%p \n", intPtr);

    char array[] {1, 4, 5, 3, 2, 6, 7, 8, 3, 7, 8, 3};  //array the name of array is a pointer
    char length = sizeof(array)/sizeof(*array);         //so you can dereference it
    for(char i = length -1 ; i>=0; i--){
        printf("%u ", array[i]);
        printf("%p ", &array[i]);
    }

    return 0;
}
